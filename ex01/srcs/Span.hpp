/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:34:16 by plau              #+#    #+#             */
/*   Updated: 2023/08/04 15:03:47 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include "color.hpp"
#include <vector>

class Span
{
	public:
		/* Orthodox canonical form */
		Span();
		~Span();
		Span(const Span &src);
		Span &operator=(const Span &src);
		
		/* Required by PDF */
		Span(unsigned int maxSize);
		void	addNumber(int x);
		void	shortestSpan();
		void	longestSpan();
		
		/* Member functions */
		void	print_container(std::vector<int> container);
		
		/* Exception class */
		class exceededMaxException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class noSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	std::vector<int> intVector;
	private:
		unsigned int _capacity;
		unsigned int _size;
};

#endif
