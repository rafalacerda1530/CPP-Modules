#include "Zombie.hpp"
#include "ZombieUtils.hpp"

int main(void){
	Zombie* zombiePtr;
	ZombieUtils utils = ZombieUtils();
	int  i;
	int N = 5;

	zombiePtr = utils.zombieHorde(N, "Potato");
	for(i = 0; i < N; i++){
		zombiePtr[i].announce();
	}
	delete [] zombiePtr;
}