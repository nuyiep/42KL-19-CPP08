/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:25:01 by plau              #+#    #+#             */
/*   Updated: 2023/08/01 13:54:47 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int x = 1;
	
	std::list<int> list1;
	list1.push_back(199);
	list1.push_back(1);
	list1.push_back(19);

	std::list<int>::iterator it1;
	std::cout << "List: ";
	for (it1 = list1.begin(); it1 != list1.end(); ++it1)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	try
	{
		int i = easyfind(list1, x);
		std::cout << "PS: Position starts from 1, not 0" << std::endl;
		std::cout << BOLD_GREEN << "First occurence of " << x << " is at " << "position " << i << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
