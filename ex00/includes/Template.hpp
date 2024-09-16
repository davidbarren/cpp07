/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:42:58 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/16 16:46:56 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename T>

void	swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return b;
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return b;
}
#endif
