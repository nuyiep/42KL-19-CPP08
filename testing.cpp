
#include <iostream>
#include <algorithm>
#include <vector>

/* Testing for std::transform */

int square(int x)
{
	return (x * x);
}

int main()
{
	std::vector<int> input = {1, 2, 3, 4, 5};
	std::vector<int> output;

	std::transform(input.begin(), input.end(), output.begin(), square);
	std::vector<int>::iterator it1;
	for (it1 = output.begin(); it1 != output.end(); ++it1)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl << std::endl;
	return (0);
}
