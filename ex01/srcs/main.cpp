/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:18:31 by plau              #+#    #+#             */
/*   Updated: 2023/08/07 19:17:40 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	std::cout << "|---------------------------------------|" << std::endl;
	std::cout << "|            PDF test                   |" << std::endl;
	std::cout << "|---------------------------------------|" << std::endl;
	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3); 
	sp.addNumber(17); 
	sp.addNumber(9); 
	sp.addNumber(11);
	
	sp.print_container(sp.intVector);
	std::cout << sp.shortestSpan() << std::endl; 
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "|---------------------------------------|" << std::endl;
	std::cout << "|            Int tests                  |" << std::endl;
	std::cout << "|---------------------------------------|" << std::endl;

	Span A = Span(8);
	A.addNumber(10);
	A.addNumber(111);
	A.addNumber(-9);
	A.addNumber(88);

	A.print_container(A.intVector);
	std::cout << A.shortestSpan() << std::endl; 
	std::cout << A.longestSpan() << std::endl;

	std::cout << "|---------------------------------------|" << std::endl;
	std::cout << "|           Zeros tests                 |" << std::endl;
	std::cout << "|---------------------------------------|" << std::endl;
	
	Span Zero = Span(4);
	Zero.addNumber(0);
	Zero.addNumber(0);
	Zero.print_container(Zero.intVector);
	std::cout << Zero.shortestSpan() << std::endl;
	std::cout << Zero.longestSpan() << std::endl;
	
	std::cout << "|---------------------------------------|" << std::endl;
	std::cout << "|           10,000 Numbers tests        |" << std::endl;
	std::cout << "|	Add many numbers using iterator |" << std::endl;
	std::cout << "|---------------------------------------|" << std::endl;
	Span tenK = Span(10000);
	int size = 9998;
	std::vector<int> numbersToAdd(size, 88);
	tenK.addManyNumbers(numbersToAdd.begin(), numbersToAdd.end(), size);
	tenK.addNumber(77);
	tenK.addNumber(66);
	// tenK.addNumber(55); //will throw exception
	tenK.print_container(tenK.intVector);
	std::cout << tenK.shortestSpan() << std::endl;
	std::cout << tenK.longestSpan() << std::endl;
	return (0);
}
