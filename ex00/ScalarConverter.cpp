/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:23:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/27 20:52:17 by tlassere         ###   ########.fr       */
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

long double	ScalarConverter::getResult(std::string const& str,
	t_scalarData *data)
{
	long double	result;

	result = 0;
	(void)str;
	return (result);
}

void	ScalarConverter::convert(std::string const& str)
{
	std::string	data[SCALAR_SIZE];
	long double	res;

	
	(void)str;
}
