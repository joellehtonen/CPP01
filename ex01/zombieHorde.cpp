#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombieHordePointer;

    zombieHordePointer = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombieHordePointer[i].setName(name);
    return (zombieHordePointer);
}
