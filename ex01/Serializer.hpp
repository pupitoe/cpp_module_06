/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:27:06 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/30 13:35:41 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

typedef	unsigned long uintptr_t;

class	Serializer
{
	private:
		Serializer(void);
		~Serializer(void);
		Serializer( Serializer const& cpy );
		Serializer&	operator=( Serializer const& cpy );
};

#endif
