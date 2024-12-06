#include "Zombie.hpp"

int main(void)
{
    Zombie *first;
    
    first = newZombie("heap");
    first->announce();
    delete first;

    randomChump("stack");
}