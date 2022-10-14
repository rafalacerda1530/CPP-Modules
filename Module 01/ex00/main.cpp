#include "Zombie.hpp"
#include "utilsZombie.hpp"

int main(void){
	utilsZombie utils = utilsZombie();
	Zombie* NewZombiePtr = utils.newZombie("Potato");
	NewZombiePtr->announce();
	utils.randomChump("Chips");
	delete NewZombiePtr;
	return 1;
}
