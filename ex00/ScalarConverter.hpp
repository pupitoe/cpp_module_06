/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:59:23 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/28 13:03:39 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>

# define SCALAR_SIZE 4

typedef	std::string t_scalarData;

class	ScalarConverter
{
	private:
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( ScalarConverter const& );
		ScalarConverter& operator= ( ScalarConverter const& );
	
	public:
		static void	convert(std::string const& str);
};

#endif
