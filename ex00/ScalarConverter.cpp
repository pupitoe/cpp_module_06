/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:23:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/28 17:12:59 by tlassere         ###   ########.fr       */
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

# define INFPOS 0x7f800000
# define INFNEG 0xff800000

static void	checkerValue(double res, t_scalarData *data)
{
	long int	check_inf;

	check_inf = *(long int *)(&res);
	if (res < 32 || res > 126)
		data[0] = "Non displayable";
	// res != res to check is NaN
	// res == (res -1) to check is infinity;
	if (res != res || check_inf == INFPOS || check_inf == INFNEG)
	{
		data[0] = "impossible";
		data[1] = "impossible";
	}
	if (static_cast<long int>(res) != static_cast<int>(res))
		data[1] = "impossible";
}

static bool	goodSyntax(std::string const& str)
{
	int			syntax;
	std::string	unic = "+-.f";

	syntax = true;
	if (str.length() > 1 )
	{
		if (str.find_last_not_of("+0123654789.-f") < str.length()
			&& str != "inf" && str != "+inf" && str != "-inf"
			&& str != "inff" && str != "+inff" && str != "-inff"
			&& str != "nan" && str != "+nan" && str != "-nan"
			&& str != "nanf" && str != "+nanf" && str != "-nanf")
			syntax = false;
		else if ((str.find_last_of("+-") != 0
			&& str.find_last_of("+-") < str.length())
			|| (str.find_last_of("f") != str.length() - 1
			&& str.find_last_of("f") < str.length())
			|| (str.find_last_of(".") < str.length()
			&& (str[str.find_first_of(".") + 1] == 'f'
			|| str.find_last_of(".") == str.length() - 1)))
			syntax = false;
		for (size_t i = 0; i < unic.length(); i++)
			if (str.find_first_of(unic[i]) != str.find_last_of(unic[i]))
				syntax = false;
	}
	return (syntax);
}

static double	getResult(std::string const& str,
	t_scalarData *data)
{
	double	result;
	
	result = 0.0;
	if (goodSyntax(str) && str.length() != 0)
	{
		result = str[0];
		if (str.length() > 1 || str.find("0123456789") < str.length())
			result = std::strtod(str.c_str(), NULL);
		checkerValue(result, data);
	}
	else
	{
		for (int i = 0; i < SCALAR_SIZE; i++)
			data[i] = "impossible";
	}
	return (result);
}

static void	set_type( std::string *type)
{
	type[0] = "char";
	type[1] = "int";
	type[2] = "float";
	type[3] = "double";
}

static void	print_format(double res, int i)
{
	if ((res - static_cast<long int>(res)) == 0)
		std::cout <<  std::setprecision(1) << std::fixed;
	else
		std::cout <<  std::setprecision(17) << std::fixed;
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

	double	res;
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
