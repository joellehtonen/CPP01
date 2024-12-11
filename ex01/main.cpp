#include "Zombie.hpp"

int main(void)
{
    int z;
    Zombie *horde;

    std::cout << "TEST #1:" << std::endl;
    z = 3;
    horde = zombieHorde(z, "Zombini");
    for (int i = 0; i < z; i++)
        horde[i].announce();
    delete[] horde;
    std::cout << std::endl;

    std::cout << "TEST #2:" << std::endl;
    z = 1;
    horde = zombieHorde(z, "Zomboroni");
    for (int i = 0; i < z; i++)
        horde[i].announce();
    delete[] horde;
}
