/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/09/14 12:20:03 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl h = Harl();

	std::cout << "[ Warning ]\n";
	h.complain("DEBUG");
	std::cout << "\n[ Info ]\n";
	h.complain("INFO");
	std::cout << "\n[ Warning ]\n";
	h.complain("WARNING");
	std::cout << "\n[ Error ]\n";
	h.complain("ERROR");
}
