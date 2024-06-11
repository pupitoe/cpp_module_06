/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:20 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 16:53:52 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generator.hpp"
#include <new>

Base * generate(void)
{
	Base	*result;

	result = NULL;
	std::srand(std::time(NULL));
	switch (std::rand() % 3)
	{
		case 0:
			result = new (std::nothrow) A();
			break;
		case 1:
			result = new (std::nothrow) B();
			break;
		case 2:
			result = new (std::nothrow) C();
			break;
		default:
			break;
	}	
	return (result);
}
