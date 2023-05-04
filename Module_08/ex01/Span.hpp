#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span {
	private: 
		std::vector<int> _numbers;
		unsigned int		_N;
	public:
		Span (void);
		Span(unsigned int N);
		Span( Span const & rhs );
		~Span( void );
		Span & operator=( Span const & rhs );

		void 	addNumber(int n);
		void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		int		shortestSpan( void );
		int		longestSpan( void );

		class SpanFullFill : public std::exception {
		virtual const char* what() const throw();
	};

	class SpanEmpty : public std::exception {
		virtual const char* what() const throw();
	};
};	

#endif