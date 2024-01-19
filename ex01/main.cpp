/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 12:58:15 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/19 13:05:36 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printInt(int x)
{
	std::cout << "Value of int: " << x << std::endl;
}

int	main()
{
	int	arr[] = { 3, 42, 9, 0 };
	iter(arr, 4, printInt);
}
