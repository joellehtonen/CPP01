#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error. Too few or too many arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Harl complainer;
	complainer.complainFilter((std::string)argv[1]);
	return (EXIT_SUCCESS);
}
