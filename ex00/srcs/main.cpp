/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:25:01 by plau              #+#    #+#             */
/*   Updated: 2023/08/09 13:57:06 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

/* std::vector constructor takes 2 iterators (begin and end) */
/* is used to initialize vector1 with the elements from the array */
/* arrayOne - starting address of the array */
/* arrayOne + number of elements in the array */
int main()
{
	int x = 11;
	int i = 0;
	
	std::cout << BOLD_MAGENTA << "*** List ***" << RESET << std::endl;
	std::list<int> list1;
	list1.push_back(199);
	list1.push_back(11);
	list1.push_back(19);
	
	std::list<int>::iterator it1;
	std::cout << "List: ";
	for (it1 = list1.begin(); it1 != list1.end(); ++it1)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	std::cout << "toFind: " << x << std::endl;
	try
	{
		i = easyfind(list1, x);
		/* PS: Position starts from 1, not 0 */
		std::cout << BOLD_GREEN << "First occurence of " << x << " is at " << "position " << i << RESET << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/* Vector */
	std::cout << BOLD_MAGENTA << "*** Vector ***" << RESET << std::endl;
	int arrayOne[4] = {55, 66, 99, 33};
	int numberOfElements = sizeof(arrayOne) / sizeof(arrayOne[0]);
	std::cout << "Number of elements in vector: " << numberOfElements << std::endl;
	std::cout << "Vector: ";
	std::vector<int> vectorOne(arrayOne, arrayOne + numberOfElements);
	std::vector<int>::iterator it2;
	for (it2 =vectorOne.begin(); it2 != vectorOne.end(); ++it2)
	{
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;
	x = 99;
	std::cout << "toFind: " << x << std::endl;
	try
	{
		i = easyfind(vectorOne, x);
		std::cout << BOLD_GREEN << "First occurence of " << x << " is at " << "position " << i << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	/* Array */
	std::cout << std::endl << BOLD_MAGENTA << "***** Array *****" << RESET << std::endl;
	int			toFind = 1000;
	const size_t size = 4;
	std::array<int, size>arrayTwo = {5, 6, 9, 3};
	std::cout << "Array: ";
	std::array<int, size>::iterator it3;
	for (it3 = arrayTwo.begin(); it3 != arrayTwo.end(); ++it3)
	{
		std::cout << *it3 << " ";
	}
	std::cout << std::endl;
	std::cout << "To find: " << toFind << std::endl;
	try
	{
		i = easyfind(arrayTwo, toFind);
		std::cout << BOLD_GREEN << "First occurence of " << toFind << " is at " << "position " << i << RESET << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
