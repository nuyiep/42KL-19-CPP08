/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:25:01 by plau              #+#    #+#             */
/*   Updated: 2023/07/31 16:06:07 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

int main()
{
	std::vector<int>values = {1, 2,  3, 4, 5};
	for (std::vector<int>::size_type i = 0; i < values.size(); i++)
	{
		std::cout << values[i] << std::endl;
	}
	// for (int value : values)
	// 	std::cout << value << std::endl;
	std::cout << std::endl;
	return (0);
}
