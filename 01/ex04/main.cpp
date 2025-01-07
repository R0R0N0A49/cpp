/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LineSwap.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Error Imput\nyou must have a filename and two strings" << std::endl;
		return (1);
	}
	LineSwap tmp((std::string)argv[1]);
	tmp.swap((std::string)argv[2], (std::string)argv[3]);
	return (0);
}