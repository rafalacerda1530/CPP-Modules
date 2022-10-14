#include "Zombie.hpp"
#include "utilsZombie.hpp"

void utilsZombie::randomChump(std::string name){
	Zombie zombie = Zombie(name);

	zombie.announce();
}