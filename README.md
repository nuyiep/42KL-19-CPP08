# 42KL-19-CPP08

This module is designed to help you understand templated containers, iterators and algorithms in CPP.

**Containers**

	- an object that holds a collection of elements/values

	- a way to organise data

	- E.g.

		- Array - fixed-size sequence of elements, where the size is determined at compile-time
		- Vector- a dynamic array that can grow and shrink in size automatically as elements are
		  added or removed
		- List: A doubly-linked list that allows efficient insertion and deletion of elements at any position.
		- Forward List: A singly-linked list similar to the list container, but more memory-efficient.
		- Deque: A double-ended queue, which is similar to a vector but allows efficient insertion and
			deletion at both ends.
		- Set: A sorted set of unique elements, where elements are automatically ordered.
		- Map: An associative container that stores key-value pairs and maintains a sorted order based on keys.
		- Unordered Set: Similar to the set container but uses a hash table to provide faster access and 
						 unordered elements.
		- Unordered Map: Similar to the map container but uses a hash table for faster access and unordered
						 key-value pairs.
		- Stack: A container that follows the Last-In-First-Out (LIFO) principle, typically used for implementing
		 		function calls and undo operations.
		- Queue: A container that follows the First-In-First-Out (FIFO) principle, often used for task scheduling.
		- Priority Queue: A container that allows efficient access to the element with the highest priority.
	
	- Example code
		#include <iostream>
		#include <map>
		#include <vector>
		#include <list>

		int main()
		{
			std::list<int>		lst1;
			
			lst1.push_back(101);
			lst1.push_back(201);

			std::cout << "list elements: ";
			std::list<int>::iterator it;
			for (it = lst1.begin(); it != lst1.end(); ++it)
			{
				std::cout << *it << " ";
			}
			std::cout << std::endl;
			return (0);
		}

OR 
Use c11's for each loop without creating an iterator
		int main()
		{
			std::list<int>		lst1;
			
			lst1.push_back(101);
			lst1.push_back(201);

			std::cout << "list elements: ";
			for (int& element : lst1)
			{
				std::cout << element << " ";
			}
			std::cout << std::endl;
			return (0);
		}

**Iterators**

	- an object that allows you to traverse and access the elements
		of a container (like arrays, vectors, list, etc) sequentially
	- acts as a pointer to elements within the container, enabling
		you to perform various operations on the container's elements

**Algorithms**
