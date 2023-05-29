/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:10:24 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 14:37:23 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.str = "Manu le loser";

	uintptr_t serialized = Serializer::serialize(&data);

	Data* deserialized = Serializer::deserialize(serialized);

	if (deserialized == &data)
		std::cout << "Le pointeur est identique." << std::endl;
	else
		std::cout << "Le pointeur n'est pas identique." << std::endl;

	return (0);
}
