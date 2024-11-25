/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:47:30 by trebours          #+#    #+#             */
/*   Updated: 2024/09/24 11:41:16 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string 	res;
	std::string::iterator 	iter;

	if (argc == 1) {
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (1);
	}
	for (int i = 1; argv[i]; i++) {
		res += argv[i];
	}
	for (iter = res.begin(); iter < res.end(); ++iter)
		*iter = std::toupper(*iter);
	std::cout<< res <<std::endl;
}
