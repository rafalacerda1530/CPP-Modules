#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cctype>

class Zombie{
	public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);
	
	private:
	std::string _name;
};

#endif