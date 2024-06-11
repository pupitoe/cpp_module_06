/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:27:51 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 12:31:23by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

static void	print_val(Data *data, uintptr_t buffer, Data *bufferData)
{
	std::cout << "data ptr: "<< data << std::endl;
	std::cout << "buffer content: " << buffer << std::endl;
	std::cout << "bufferdata content: " << bufferData << std::endl;
	std::cout << "--------------------------------------" << std::endl;
}

int	main(void)
{
	Data		data;
	uintptr_t	buffer;
	Data		*bufferData;
	
	std::memset(&data, 0, sizeof(Data));
	data.florian = 64;
	data.lionel = 693;
	data.obamas[0] = 'm';
	data.obamas[1] = 'i';
	data.obamas[2] = 'n';
	data.obamas[3] = 'i';
	data.obamas[4] = '0';
	buffer = 0;
	bufferData = NULL;
	std::cout << "data ptr content: florian: " << data.florian
		<< " lionel: " << data.lionel << " obamas: " << data.obamas
		<< std::endl;
	std::cout << "--------------------------------------" << std::endl;
	print_val(&data, buffer, bufferData);
	buffer = Serializer::serialize(&data);
	print_val(&data, buffer, bufferData);
	bufferData = Serializer::deserialize(buffer);
	print_val(&data, buffer, bufferData);
	std::cout << "data ptr content: florian: " << bufferData->florian
		<< " lionel: " << bufferData->lionel << " obamas: "
		<< bufferData->obamas << std::endl;
}
