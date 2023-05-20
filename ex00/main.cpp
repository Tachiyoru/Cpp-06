/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:45:10 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 18:45:18 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "tuto : ./convert [str]" << std::endl;
		return (1);
	}
	std::string	input = av[1];
	ScalarConverter::convert(input);
	return (0);
}
