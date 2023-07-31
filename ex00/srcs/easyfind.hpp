/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:24:58 by plau              #+#    #+#             */
/*   Updated: 2023/07/31 18:54:36 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>

/* Exception class */
class noOccurrenceIsFound : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("No occurence is found");
		}
	
};

template<typename T>
int easyfind(T data, int x)
{
	std::list<int>::iterator it1;
	int	i = 1;
	for (it1 = data.begin(); it1 != data.end(); ++it1)
	{
		if (*it1 == x)
			return (i);
		i++;
	}
	throw noOccurrenceIsFound();
}

#endif
