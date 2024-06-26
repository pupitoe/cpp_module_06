/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:27:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 14:10:58 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstring>
# include <iostream>
# include "Data.hpp"

typedef	unsigned long uintptr_t;

class	Serializer
{
	private:
		Serializer(void);
		~Serializer(void);
		Serializer( Serializer const& cpy );
		Serializer&	operator=( Serializer const& cpy );

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
