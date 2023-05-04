 #include "Span.hpp"

Span::Span( void ) : _N( 0 ) { 
	return ;
}

Span::Span( unsigned int N ) : _N( N ) {
	return ;
}

Span::Span( Span const & rhs ) {
	this->operator=( rhs );
	return ;
}

Span::~Span( void ) {
	return ;
}

Span & Span::operator=( Span const & rhs ) {
	this->_N = rhs._N;
	this->_numbers = rhs._numbers;
	return ( *this );
}

void Span::addNumber(int n) {
	if (this->_numbers.size() == this->_N)
		throw Span::SpanFullFill();
	this->_numbers.push_back( n );
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	int length = 0;

	for (std::vector<int>::iterator it = begin; it != end; it++)
		length++;
	if (this->_numbers.size() + (length - 1) > this->_N)
		throw Span::SpanFullFill();
	this->_numbers.insert( this->_numbers.end(), begin, end );
}

int		Span::shortestSpan( void ){
	if ( this->_numbers.size() < 2 )
		throw Span::SpanEmpty();
	std::sort( this->_numbers.begin(), this->_numbers.end() );
	
	std::vector<int>::iterator it = this->_numbers.begin();
	int	result = std::abs(*it - *(it + 1));

	for ( ; it != this->_numbers.end(); it++)
		if ( (it + 1) != this->_numbers.end() && std::abs(*it - *(it + 1)) < result)
			result = std::abs(*it - *(it + 1));
	return ( result );
}

int		Span::longestSpan( void ) {
	if ( this->_numbers.size() < 2 )
		throw Span::SpanEmpty();

	std::vector<int>::iterator max = std::max_element( this->_numbers.begin(), this->_numbers.end() );
	std::vector<int>::iterator min = std::min_element( this->_numbers.begin(), this->_numbers.end() );

	return ( *max - *min );
}

const char* Span::SpanFullFill::what() const throw() {
	return ( "Span is full!" );
}

const char* Span::SpanEmpty::what() const throw() {
	return ( "Span is empty or have only one number!" );
}

