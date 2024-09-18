/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:47:23 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/18 11:28:01 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Template.hpp"
#include <iostream>
#include "Template.hpp"


int	main(void)
{
	int arr[3] = { 0, 1, 2};
	char carr[3] = { 'a', 'b', 'c'};
	std::cout << "pre incrementation array ---------- " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "value of int array: " << arr[i] << std::endl;
		std::cout << "value of char array: " << carr[i] << std::endl;
	}
	iter<int>(arr, 3, add<int>);
	iter<char>(carr, 3, add<char>);
	std::cout << "post incrementation array ---------- " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "value of int array: " << arr[i] << std::endl;
		std::cout << "value of char array: " << carr[i] << std::endl;
	}
}
