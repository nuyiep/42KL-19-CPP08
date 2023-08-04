/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:18:31 by plau              #+#    #+#             */
/*   Updated: 2023/08/04 15:08:49 by plau             ###   ########.fr       */
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
	// std::cout << sp.shortestSpan() << std::endl; 
	// std::cout << sp.longestSpan() << std::endl;

	std::cout << "|---------------------------------------|" << std::endl;
	std::cout << "|            Other tests                |" << std::endl;
	std::cout << "|---------------------------------------|" << std::endl;

	Span A = Span(8);
	A.addNumber(10);
	A.addNumber(111);

	A.print_container(A.intVector);
	A.shortestSpan();
	return (0);
}
