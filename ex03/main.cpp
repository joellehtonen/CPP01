#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA alice("Alice", club);
        alice.attack();
        club.setType("some other type of club");
        alice.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB bob("Bob");
        //bob.setWeapon(club);
        bob.attack();
        club.setType("some other type of club");
        //bob.attack();
    }
}
