#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >
class Array {

	private:
		T * _array;
		unsigned int _length;

	public:

		Array(void) : _array(NULL), _length(0) {};
		Array (unsigned int n) : _array( new T[n]), _length(n) {};
		Array( Array const & rhs ) : _array( NULL ) { this->operator=( rhs ); };
		~Array ( void ) { delete [] this->_array; };

		unsigned int	size( void ) const { return ( this->_length ); };

		Array & operator=( const Array & rhs) {
			delete [] this->_array;
			this->_array = new T[rhs.size()];
			for (unsigned int i = 0; i < rhs.size(); i++)
				this->_array[i] = rhs[i];
			this->_length = rhs.size();
			return ( *this );
		};

		T & operator[](unsigned int index ) const {
			if (index >= this->_length)
					throw Array::IndexIsOutOfBounds();
			return ( this->_array[index] );
		};

		class IndexIsOutOfBounds : public std::exception {
			virtual const char* what() const throw() {
				return ( "Index is out of bounds!" );
			};
		};
};


#endif