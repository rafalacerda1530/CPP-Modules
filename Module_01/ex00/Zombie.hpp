#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cctype>

class Zombie{

	public:
	Zombie(std::string Name);
	~Zombie( void );
	Zombie* newZombie(std::string name);

	void announce(void);

	private: 
	std::string _name;
};

#endif