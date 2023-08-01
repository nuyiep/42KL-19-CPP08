/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:24:58 by plau              #+#    #+#             */
/*   Updated: 2023/08/01 13:54:34 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <algorithm>
#include "color.hpp"

/* Exception class */
class noOccurrenceIsFound : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("No occurence is found");
		}
	
};

/* Use S/Users/plau/19-CPP07/ex02/srcs/color.hpp/Users/plau/19-CPP07/ex02/srcs/color.hpp/Users/plau/19-CPP07/ex02/srcs/color.hppTL algorithms for searching */
/* data.end() returns an iterator pointing beyond the last element */
/* if std::find does not find the target, it returns data.end() */
/* check if x is found */
/* std::distance- calculates the distance between 2 iterators */
/* 				- beginning iterator and found iterator */
template<typename T>
int easyfind(T data, int x)
{
	typename T::iterator it1;
	
	it1 = std::find(data.begin(), data.end(), x);
	if (it1 != data.end()) //element is found
	{
		int pos = std::distance(data.begin(), it1);
		return (pos + 1);
	}
	else
	{
		throw noOccurrenceIsFound();
	}
}

/* Manual search using iterators - Not allowed by subject PDF */
// template<typename T>
// int easyfind(T data, int x)
// {
// 	std::list<int>::iterator it1;
// 	int	i = 1;
// 	for (it1 = data.begin(); it1 != data.end(); ++it1)
// 	{
// 		if (*it1 == x)
// 			return (i);
// 		i++;
// 	}
// 	throw noOccurrenceIsFound();
// }

#endif
