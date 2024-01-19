/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 12:43:37 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/19 12:54:04 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

// int	main()
// {
// 	std::string a = "hallo";
// 	std::string b = "codam";

// 	std::cout << "Value of string a: " << a << std::endl;
// 	std::cout << "Value of string b: " << b << std::endl;
// 	swap(a, b);
// 	std::cout << "New value of string a: " << a << std::endl;
// 	std::cout << "New value of string b: " << b << std::endl;

// 	std::string c = static_cast<std::string>(max(a, b));
// 	std::cout << "Max of a & b: " << c << std::endl;
// 	return 0;
// }

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
