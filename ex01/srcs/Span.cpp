/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:32:01 by plau              #+#    #+#             */
/*   Updated: 2023/08/04 15:09:22 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : intVector(std::vector<int>()), _capacity(0), _size(0)
{
}

Span::~Span()
{
}

Span::Span(const Span &src)
{
	(*this) = src;
}

Span &Span::operator=(const Span &src)
{
	this->_capacity = src._capacity;
	this->_size = src._size;
	return (*this); 
}

Span::Span(unsigned int maxSize) : intVector(std::vector<int>()), _capacity(0), _size(0)
{
	this->_capacity = maxSize;	
}

/* Provides the definition of what() */
const char* Span::exceededMaxException::what() const throw()
{
	return (BOLD_RED "Exceeded Max- Quiting program~ bye" RESET);
}

const char* Span::noSpanException::what() const throw()
{
	return (BOLD_RED "No Span Found- Quiting program~ bye" RESET);
}

void	Span::addNumber(int x)
{
	this->_size++;
	try
	{
		if (_size > _capacity)
			throw (exceededMaxException());
		this->intVector.push_back(x);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(EXIT_FAILURE);
	}
}

void	Span::print_container(std::vector<int>container)
{
	std::vector<int>::iterator it1;
	for (it1 = container.begin(); it1 != container.end(); ++it1)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl << std::endl;
}

void	Span::shortestSpan(void)
{
	try
	{
		if (_size <= 1)
			throw (noSpanException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(EXIT_FAILURE);
	}
	
}

void	Span::longestSpan(void)
{
	
}
