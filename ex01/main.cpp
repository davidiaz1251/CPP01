#include "Zombie.hpp"

int main() {
	std::cout << "=== Creating a horde of 5 zombies ===" << std::endl;

	int hordeSize = 5;
	Zombie* horde = zombieHorde(hordeSize, "HordeZombie");

	if (horde) {
		std::cout << "\n=== Making zombies announce themselves ===" << std::endl;
		for (int i = 0; i < hordeSize; i++) {
			std::cout << "Zombie " << i << ": ";
			horde[i].announce();
		}

		std::cout << "\n=== Destroying the horde ===" << std::endl;
		delete[] horde;
	}

	std::cout << "\n=== Testing edge case: N = 0 ===" << std::endl;
	Zombie* emptyHorde = zombieHorde(0, "EmptyZombie");
	if (!emptyHorde) {
		std::cout << "Empty horde correctly returned NULL" << std::endl;
	}

	return 0;
}
