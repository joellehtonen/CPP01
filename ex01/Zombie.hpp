#pragma once
#include <string>
#include <iostream>
#include <set>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie() {}; 
        Zombie(std::string name);
        ~Zombie();

        void setName(std::string name);
        void announce(void);
};

Zombie *zombieHorde(int N, std::string name);