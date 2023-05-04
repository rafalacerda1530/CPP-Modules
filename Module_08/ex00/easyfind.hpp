#ifndef EASYFIND_HPP
# define EASYFIND_HPP


#include <algorithm>
#include <iostream>

class NotFound : public std::exception{
	virtual const char* what() const throw(){
		return("Not Found!");
	};
};

template < typename T>
typename T::iterator easyfind(T & container, int x){
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), x);
	if(it == container.end())
		throw NotFound();
	return(it);
}
#endif