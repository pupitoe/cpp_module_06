/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:20 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 19:58:05 by tlassere         ###   ########.fr       */
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
			std::cout << "A is created" << std::endl;
			result = new (std::nothrow) A();
			break;
		case 1:
			std::cout << "B is created" << std::endl;
			result = new (std::nothrow) B();
			break;
		case 2:
			std::cout << "C is created" << std::endl;
			result = new (std::nothrow) C();
			break;
		default:
			break;
	}	
	return (result);
}

void identify(Base* p)
{
	std::cout << "PTR identify" << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "This class is Base->A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "This class is Base->B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "This class is Base->C" << std::endl;
	else
		std::cout << "This class is just Base" << std::endl;
}

void identify(Base& p)
{
	std::cout << "Reference identify" << std::endl;
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "This class is Base->A" << std::endl;
	}
	catch(const std::exception&)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "This class is Base->B" << std::endl;
		}
		catch(const std::exception&)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "This class is Base->C" << std::endl;
			}
			catch(const std::exception&)
			{
				std::cout << "This class is just Base" << std::endl;
			}
		}
	}
}
