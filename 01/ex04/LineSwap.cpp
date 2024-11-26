/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LineSwap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LineSwap.hpp"

void	lineswap(std::string file, std::string s1, std::string s2)
{
	std::string line;
	std::ifstream imput(file);
	std::ofstream output;
	int pos;
	int	i;

	output.open((file + ".replace").c_str());
	i = -1;
	while (std::getline(imput, line))
	{
		i = 0;
		pos = 0;
		while (pos != std::string::npos)
		{
			pos = line.find(s1, i);
			if (pos == std::string::npos)
			{
				output << &line[i] << std::endl;
				break ;
			}
			while (i < pos)
			{
				output << line[i];
				i++;
			}
			i = pos + s1.size();
			output << s2;
		}
	}
	if (i == -1)
		std::cout << "the file cannot be opened !" << std::endl;
	else
		std::cout << "the string has been replace !" << std::endl;
	imput.close();
	output.close();
}
