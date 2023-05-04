#include "easyfind.hpp"
#include <vector>

int main(void) {
	{
		int myArray[5] = {5,10,15,20,25};

		std::vector<int> vec(myArray, myArray + sizeof(myArray) / sizeof(int));
		std::cout << "Number: " << *easyfind( vec, 20) << std::endl;

	}
	{
		std::vector<int> myVector (10);
		std::vector<int>::size_type n = myVector.size();

		for (unsigned i = 0; i < n; i++)
			myVector [i] = i;
		std::cout << std::endl;

		for (unsigned i = 0; i < n; i++)
			std::cout << myVector[i] << ' ' ;
		std::cout << std::endl;
		std::cout << "Number: " << *easyfind( myVector, 9 ) << std::endl;
	}
	return (0);
}