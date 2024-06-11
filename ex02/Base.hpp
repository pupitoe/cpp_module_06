/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:54:38 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:43 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class	Base
{
	private:
		Base(void);
		Base(Base const& cpy);
		Base&	operator=(Base const& cpy);

	private:
		virtual ~Base(void);
};

# endif
