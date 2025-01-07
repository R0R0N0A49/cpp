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

LineSwap::LineSwap() {
}

LineSwap::LineSwap(std::string file) {
	this->_input.open(file.c_str());
	this->_output.open((file + ".replace").c_str());
	std::cout << "files are open !\n\n";
}
LineSwap::~LineSwap() {
	this->_input.close();
	this->_output.close();
	std::cout << "\nfiles are close !\n";
}

void	LineSwap::swap( std::string s1, std::string s2)
{
	std::string line;
	int pos;
	int	i;

	i = -1;
	while (std::getline(_input, line)) {
		i = 0;
		pos = 0;
		while (pos != (int)std::string::npos) {
			pos = line.find(s1, i);
			if (pos == (int)std::string::npos) {
				_output << &line[i] << std::endl;
				break;
			} while (i < pos) {
				_output << line[i];
				i++;
			}
			i = pos + s1.size();
			_output << s2;
		}
	} if (i == -1)
		std::cout << "the file cannot be opened !" << std::endl;
	else
		std::cout << "the string has been replace !" << std::endl;
}
