/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:35:59 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/16 16:46:10 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "moi" << std::endl;
	int i = 5;
	int k = 6;
	std::string rotta = "rotta";
	std::string apina = "apina";
	::swap(i,k);
	::swap(rotta, apina);
	std::cout << i << std::endl;
	std::cout << k << std::endl;
	std::cout << rotta << std::endl;
	std::cout << apina << std::endl;
	std::cout << ::min(i,k) << std::endl;
	std::cout << ::min(apina, rotta) << std::endl;
	std::cout << ::max(i,k) << std::endl;
	std::cout << ::max(apina, rotta) << std::endl;
}
