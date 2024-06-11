/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:27:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 12:44:42 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstring>
# include <iostream>

typedef	unsigned long uintptr_t;

struct Data
{
	int	lionel;
	int	chris;
	int fabio;
	int	florian;
	char	obamas[7];
};

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
