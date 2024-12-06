#include "Zombie.hpp"

int main(void)
{
    int z = 9;
    Zombie *horde;

    horde = zombieHorde(z, "Zombini");
    for (int i = 0; i < z; i++)
        horde[i].announce();
    for (int i = 0; i < z; i++) 
        delete[] horde;
}