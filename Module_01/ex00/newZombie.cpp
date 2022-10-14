#include "Zombie.hpp"
#include "utilsZombie.hpp"

Zombie* utilsZombie::newZombie(std::string name){
	return (new Zombie(name));
}