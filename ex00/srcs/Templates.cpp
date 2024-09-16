/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:37:46 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/16 15:20:17 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Template.hpp"
template <typename T>
void	swap(T a,T b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
