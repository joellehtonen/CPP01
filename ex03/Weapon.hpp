#pragma once
#include <string>

class Weapon 
{
    private:
        std::string type;

    public:
        Weapon() {};
        ~Weapon() {};
        
        const std::string   &Weapon::getType(void);
        void                setType(std::string type);
};