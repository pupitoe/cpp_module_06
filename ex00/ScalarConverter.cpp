/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:23:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/28 13:58:59 by tlassere         ###   ########.fr       */
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

static void	checkerValue(long double res, t_scalarData *data)
{
	if (res < 32 || res > 126)
		data[0] = "Non displayable";
	// res != res to check is NaN
	// res == (res -1) to check is infinity;
	if (res != res || res == (res - 1))
	{
		data[0] = "impossible";
		data[1] = "impossible";
	}
	if (res > 2147483647 || res < -2147483648)
		data[1] = "Non displayable";
	std::cout << res << std::endl;
}

static long double	getResult(std::string const& str,
	t_scalarData *data)
{
	long double	result;

	result = std::strtod(str.c_str(), NULL);
	if (result == HUGE_VAL)
		std::cout << "hmm oky" << std::endl;
	checkerValue(result, data);
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
	bool	plus_print;

	plus_print = false;
	if ((res - static_cast<long int>(res)) == 0)
		std::cout <<  std::setprecision(1) << std::fixed;
	if (res == (res - 1) && res > 0)
		plus_print = true;
	switch (i)
	{
		case 0:
			std::cout << "'" << static_cast<char>(res) << "'";
			break;
		case 1:
			std::cout << static_cast<int>(res);
			break;
		case 2:
			std::cout << ((plus_print) ? '+' : '\0')
				<< static_cast<float>(res) << 'f';
			break;
		case 3:
			std::cout << ((plus_print) ? '+' : '\0')
				<< static_cast<double>(res);
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
