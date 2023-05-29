/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:24:52 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 14:37:03 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
	private:

	public:

		Serializer();
		Serializer(Serializer const &copy);
		~Serializer();

		Serializer &operator=(Serializer const &toCopy);

		static	uintptr_t serialize(Data *ptr);
		static	Data	*deserialize(uintptr_t raw);
};

#endif
