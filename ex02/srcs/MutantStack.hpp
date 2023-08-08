/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:33:26 by plau              #+#    #+#             */
/*   Updated: 2023/08/08 21:03:29 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		/* Orthodox Canonical Form */
		MutantStack() {}; 
		~MutantStack() {};
		MutantStack(const MutantStack &src) {(void)src;};
		MutantStack &operator=(const MutantStack &src) {(void)src;};
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return (this->c.begin());};
		iterator end() {return (this->c.end());};

	private:	
	
};

// https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators#:~:text=Stack%20does%20not%20have%20iterators,std%3A%3Avector%2C%20etc).https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators#:~:text=Stack%20does%20not%20have%20iterators,std%3A%3Avector%2C%20etc).
// https://www.youtube.com/watch?v=86Pa973BW4Y&ab_channel=C%2B%2BWeeklyWithJasonTurner
/* Can add */
/**
 * different types of iterator 
 * initialize default constructor to inherit explicitly from std::stack
 * define copy constructor and assignment operator
 */
#endif
