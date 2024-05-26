/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:05:56 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 19:09:11 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	numbers;

	if (argc == 2)
	{
		numbers = argv[1];
	}
	else
		std::cout << "Invalide argument" << std::endl;
}