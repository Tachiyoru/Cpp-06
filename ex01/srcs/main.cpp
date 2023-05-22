/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:10:24 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 12:18:39 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int	main( void )
{
	Data		*ptr = new Data;
	Data		*serialized;
	uintptr_t	raw;

	ptr->data = "Oe le sang !!";
	raw = serialize(ptr);
	serialized = deserialize(raw);
	std::cout << "serialized->data = " << serialized->data << std::endl;
	delete ptr;
}
