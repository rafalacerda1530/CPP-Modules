#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default constructor Brain called" << std::endl;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "Destructor Brain called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const &  oprt){
	std::cout << "Copy Assignemt Brain called" << std::endl;
	for(int i = 0; i<100; i++){
		this->_ideas[i] = oprt._ideas[i];
	}
	return(*this);
}

Brain::Brain(Brain const  & brain) {
	std::cout << "Copy Constructor Brain called" << std::endl;
	*this = brain;
	return;
}

std::string Brain::getIdeas(int index){
	if(index < 0 || index > 100){
		std::cout << "Wrong Index" << std::endl;
		return (" ");
	}
	return(this->_ideas[index]);
}

void Brain::setIdeas(int index, std::string idea){
	if(index < 0 || index > 100){
		std::cout << "Wrong Index" << std::endl;
		return ;
	}
	this->_ideas[index] = idea;
	return;
}