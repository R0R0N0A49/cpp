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

	std::cout << "\033[1;35m" << "[ DEBUG ]\n" << "\033[1;m";
	h.complain("DEBUG");
	std::cout << "\033[38;2;50;200;0m" << "\n[ Info ]\n" << "\033[1;m";
	h.complain("INFO");
	std::cout << "\033[38;2;255;150;20m" << "\n[ Warning ]\n" << "\033[1;m";
	h.complain("WARNING");
	std::cout << "\033[1;31m" << "\n[ Error ]\n" << "\033[1;m";
	h.complain("ERROR");
	std::cout << "\033[1;35m" << "\n[ DEBUG ]\n" << "\033[1;m";
	h.complain("DEBUG");
}
