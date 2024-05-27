/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:59:23 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/27 20:50:02 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>

# define SCALAR_SIZE 4

typedef	std::string t_scalarData;

class	ScalarConverter
{
	private:
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( ScalarConverter const& );
		ScalarConverter& operator= ( ScalarConverter const& );
		long double	getResult(std::string const& str, t_scalarData *data);
	
	public:
		static void	convert(std::string const& str);
};

#endif
