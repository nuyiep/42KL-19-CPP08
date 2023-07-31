/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:25:01 by plau              #+#    #+#             */
/*   Updated: 2023/07/31 18:52:50 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int x = 19;
	std::list<int> list1;
	list1.push_back(199);
	list1.push_back(1);
	list1.push_back(19);
	std::list<int>::iterator it1;
	for (it1 = list1.begin(); it1 != list1.end(); ++it1)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	try
	{
		int i = easyfind(list1, x);
		std::cout << "First occurence of " << x << " is at " << "position " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
