#include <iostream>
#include <string>

int main (void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "The memory address of the string is " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string is " << brain << std::endl;
    std::cout << "The value pointed by stringPTR is " << *stringPTR << std::endl;
    std::cout << "The value pointed by stringREF is " << stringREF << std::endl;
}

