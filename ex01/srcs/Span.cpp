/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:32:01 by plau              #+#    #+#             */
/*   Updated: 2023/08/01 20:51:58 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
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
	//add variables assignment here later
	this->_maxSize = src._maxSize;
	return (*this); 
}

Span::Span(unsigned int maxSize)
{
	this->_maxSize = maxSize;	
}

/* Provides the definition of what() */
const char* Span::exceededMaxException::what() const throw()
{
	return (BOLD_RED "Exceeded Max" RESET);
}

void	Span::addNumber(int x)
{
	try
	{
		if (x < 0 || x > 9)
			throw (notASingleNumberException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Span::notASingleNumberException::what() const throw()
{
	return (BOLD_RED "Not a single number" RESET);
}
