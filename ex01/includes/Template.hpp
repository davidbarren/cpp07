/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:49:03 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/18 11:21:15 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP
#include <cstddef>

template<typename T, typename F>
void	iter(T* address, size_t len, F function)
{
	for(size_t i = 0; i < len; i++)
		function(address[i]);
}

template<typename T>
void	add(T& type)
{
	type += 1;
}

template<typename T>
void	subtract(T& type)
{
	type -= 1;
}

#endif
