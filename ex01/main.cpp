#include "Zombie.hpp"

int main(int argc, char** argv)
{
    int         z;
    std::string name;
    Zombie      *horde;

    if (argc != 3)
    {
        std::cout << "Incorrect amount of arguments" << std::endl;
        std::cout << "Correct use: ./program_name [number of zombies] [name of zombies]" << std::endl;
        return (-1);
    }
    z = std::stoi(argv[1]);
    if (z < 0 || z > 999)
    {
        std::cout << "Too many or too few zombies (between 0 and 999)" << std::endl;
        return (-1);
    }
    name = argv[2];
    if (name.empty() == true)
    {
        std::cout << "Zombie name cannot be empty" << std::endl;
        return (-1);
    }
    horde = zombieHorde(z, name);
    for (int i = 0; i < z; i++)
        horde[i].announce();
    delete[] horde;
}
