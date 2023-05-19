/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:48:44 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 16:37:12 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout<<"ScalarConverter constructor called"<<std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &toCopy){
	if (this != &toCopy)
		*this = toCopy;
	std::cout<<"ScalarConverter copy constructor called"<<std::endl;
}

ScalarConverter::~ScalarConverter(){
	std::cout<<"ScalarConverter destructor called"<<std::endl;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &toCopy){
	(void)toCopy;
	return (*this);
}

