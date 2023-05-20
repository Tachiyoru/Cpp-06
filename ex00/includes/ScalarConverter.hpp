/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:43:43 by sleon             #+#    #+#             */
/*   Updated: 2023/05/20 18:44:51 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cmath>
#include <limits>
# include <string>
# include <sstream>
# include <cstdlib>
# include <iomanip>

class ScalarConverter
{
	private:

	public:

		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter(void);

		ScalarConverter	&operator = (ScalarConverter const &toCopy);

		static void		convert(std::string input);

		static void		printChar(std::string str);
		static void		printInt(std::string str);
		static void		printFloat(std::string str);
		static void		printDouble(std::string str);

};

#endif
