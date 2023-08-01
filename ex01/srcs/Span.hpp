/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:34:16 by plau              #+#    #+#             */
/*   Updated: 2023/08/01 20:51:23 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include "color.hpp"

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
		
		/* Exception class */
		class exceededMaxException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class notASingleNumberException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
	private:
		unsigned int _maxSize;
};

#endif
