#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	private:
	std::string _ideas[100];

	public:
	Brain(void); 
	~Brain(void);
	Brain(Brain const & brain);
	Brain & operator=(Brain const & oprt);
	std::string	getIdeas( int index );
	void setIdeas( int index, std::string idea );

};

#endif 