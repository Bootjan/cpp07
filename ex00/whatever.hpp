/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 12:39:21 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/19 12:53:06 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& x, T& y)
{
	T	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T&	max(T& x, T& y)
{
	return (x > y) ? x : y;
}
template <typename T>
T&	min(T& x, T& y)
{
	return (x < y) ? x : y;
}

#endif
