/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:23:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/28 13:13:01 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const& )
{
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	return ;
}

ScalarConverter& ScalarConverter::operator=( ScalarConverter const& )
{
	return (*this);
}

static long double	getResult(std::string const& str,
	t_scalarData *data)
{
	long double	result;

	result = 0.5656565656;
	(void)str;
	(void)data;
	return (result);
}

static void	set_type( std::string *type)
{
	type[0] = "char";
	type[1] = "int";
	type[2] = "float";
	type[3] = "double";
}

static void	print_format(long double res, int i)
{
	if ((res - static_cast<long int>(res)) == 0)
		std::cout <<  std::setprecision(1) << std::fixed;
	
	switch (i)
	{
		case 0:
			std::cout << "'" << static_cast<char>(res) << "'";
			break;
		case 1:
			std::cout << static_cast<int>(res);
			break;
		case 2:
			std::cout << static_cast<float>(res) << 'f';
			break;
		case 3:
			std::cout << static_cast<double>(res);
			break;
		default:
			break;
	}
}

void	ScalarConverter::convert(std::string const& str)
{
	t_scalarData	data[SCALAR_SIZE];
	std::string		type[SCALAR_SIZE];

	long double	res;
	set_type(type);
	res = getResult(str, data);
	for (int i = 0; i < SCALAR_SIZE; i++)
	{
		std::cout << type[i] << ": ";
		if (data[i].empty())
			print_format(res, i);
		else
			std::cout << data[i];
		std::cout << "\n";
	}
}
