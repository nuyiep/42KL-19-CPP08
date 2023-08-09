/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:34:16 by plau              #+#    #+#             */
/*   Updated: 2023/08/09 14:02:16 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include "color.hpp"
#include <vector>
#include <algorithm>
#include <numeric>

class Span
{
	public:
		/* Orthodox canonical form */
		Span();
		~Span();
		Span(const Span &src);
		Span &operator=(const Span &src);
		
		/* Required by PDF */
		Span(unsigned int capacity);
		void	addNumber(int x);
		void	addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end, int size);
		int		shortestSpan();
		int		longestSpan();
		
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
