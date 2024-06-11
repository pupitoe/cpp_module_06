/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:27:51 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/11 12:31:23by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "generator.hpp"

int	main(int argc, char **)
{
	if (argc == 1)
	{
		Base	*misterius;

		misterius = generate();
		if (misterius)
		{
			identify(misterius);
			identify(*misterius);
			delete misterius;
		}
		else
			std::cout << "An error was occured" << std::endl;
	}
	else
	{
		A	ah;
		B	biensur;
		C	cie_sauteuse;

		identify(ah);
		identify(&ah);
		identify(biensur);
		identify(&biensur);
		identify(cie_sauteuse);
		identify(&cie_sauteuse);
	}
	return (0);
}
