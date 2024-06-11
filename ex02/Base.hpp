/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:54:38 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 16:33:20 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

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