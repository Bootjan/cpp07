/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 12:55:18 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/19 13:05:46 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* arr, size_t len, void (*f)(T))
{
	for (size_t idx = 0; idx < len; idx++)
		f(arr[idx]);
}

#endif
