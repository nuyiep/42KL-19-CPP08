/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:32:01 by plau              #+#    #+#             */
/*   Updated: 2023/08/07 19:11:29 by plau             ###   ########.fr       */
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
	return (RED "Exceeded Max- Quiting program~ bye" RESET);
}

const char* Span::noSpanException::what() const throw()
{
	return (RED "No Span Found- Quiting program" RESET);
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
	std::cout << std::endl;
}

int getAdjacentDistance(int first, int second)
{
	int max = std::max(first, second);
	int min = std::min(first, second);
	int results = std::abs(max - min);
	return (results);
}

/*
	std::back_inserter
		- insert elements at the end of a container using the push_back() or 
			equivalent function
		- no need to resize and insert elements 
	getDistance
		- use getDistance function for each transformation step
*/
int	Span::shortestSpan(void)
{
	try
	{
		if (_size <= 1)
			throw (noSpanException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
		exit(EXIT_FAILURE);
	}
	std::vector<int> afterSort;
	std::vector<int> containDistance(this->_size - 1);
	int min = -1;
	std::copy(this->intVector.begin(), this->intVector.end(), std::back_inserter(afterSort));
	std::sort(afterSort.begin(), afterSort.end());
	std::transform(afterSort.begin(), afterSort.end() - 1, afterSort.begin() + 1, containDistance.begin(), getAdjacentDistance);
	min = *std::min_element(containDistance.begin(), containDistance.end());
	
	return (min);	
}

int	Span::longestSpan(void)
{
	try
	{
		if (_size <= 1)
			throw (noSpanException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
		exit(EXIT_FAILURE);
	}
	std::vector<int> afterSort;
	std::vector<int> containDistance(this->_size - 1);
	int max = -2;
	std::copy(this->intVector.begin(), this->intVector.end(), std::back_inserter(afterSort));
	std::sort(afterSort.begin(), afterSort.end());
	std::transform(afterSort.begin(), afterSort.end() - 1, afterSort.begin() + 1, containDistance.begin(), getAdjacentDistance);
	std::cout << BOLD_MAGENTA << "Printing after-sorted-vec" << std::endl;
	print_container(afterSort);
	std::cout << "Printing distance-vec" << std::endl;
	print_container(containDistance);
	std::cout << RESET;
	max = std::accumulate(containDistance.begin(), containDistance.end(), 0);
	return (max);	
}

void	Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end, int size)
{
	this->_size = this->_size + size;
	try
	{
		if (this->_size > this->_capacity)
			throw (exceededMaxException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(EXIT_FAILURE);
	}
	this->intVector.insert(this->intVector.end(), begin, end);	
}
