/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/09/14 12:20:03 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
			  "-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "\n[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				"enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "\n[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				"years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "\n[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

static int	Harl_level(const std::string& src)
{
	std::string level[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		if (src == level[i])
			return (i);
	}
	return (-1);
}

void Harl::complain(const std::string& level)
{
	switch (Harl_level(level))
	{
		case 0: debug();
		case 1: info();
		case 2: warning();
		case 3: error(); break ;
		case -1: std::cout << "Error Imput\nInput valid = \"DEBUG\" \"INFO\""
					   " \"WARNING\" \"ERROR\"\n";
	}
}
