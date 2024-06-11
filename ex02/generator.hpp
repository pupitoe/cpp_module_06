/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:53 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 16:58:47 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERATOR_HPP
# define GENERATOR_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <cstdlib>
# include <ctime>
#include <iostream>


class	Base;

Base * generate(void);
void identify(Base* p);

#endif