/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:43:43 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 16:36:50 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter
{
	private:

	public:

		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter();

		ScalarConverter &operator=(ScalarConverter const &toCopy);

		static void	convert(std::string& str);

		class	NonDisplayableException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

};

#endif
