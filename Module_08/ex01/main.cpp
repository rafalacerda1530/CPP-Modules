#include "Span.hpp"
#include <ctime>

int main()
{
	{
		Span sp = Span(12);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9); 
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
		int myArray[] = { 5, 10, 15, 20, 25, 30 };
		std::vector<int> vec(myArray, myArray + sizeof(myArray) / sizeof(int) );
		sp.addNumber( vec.begin(), vec.end() );
		std::cout << "After add some mores numbers" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span sp( 10000 );
		for (int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}
		std::cout << "test of pdf with 10 000: " << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span sp( 200000 );
		for (int i = 0; i < 200000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}
		std::cout << "test with 200 000: " << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	try {
		Span sp(5);
		int a[] = { 3, 5, 6, 7, 900, 123, 8 };
		std::vector<int> vec(a, a + sizeof(a) / sizeof(int) );
		sp.addNumber( vec.begin(), vec.end() );
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Span sp(5);
		int a[] = { 3,};
		std::vector<int> vec(a, a + sizeof(a) / sizeof(int) );
		sp.addNumber( vec.begin(), vec.end() );
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}