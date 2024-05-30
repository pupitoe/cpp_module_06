/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:59:23 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/30 12:58:05 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cmath>

# define SCALAR_SIZE 4
# define INFPOS 0x7f800000
# define INFNEG 0xff800000

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
