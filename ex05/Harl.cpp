#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "this is a mild debug message" << std::endl;
	std::cout << "it likes food without spices or condiments, and its drink of choice is room temperature tap water without added minerals" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "This is a moderate and polite info message." << std::endl;
	std::cout << "It dresses in business casual Mon-Fri, and prefers to vote for center-left or center-right." << std::endl;
};
void	Harl::warning(void)
{
	std::cout << "This Is a Serious Warning Message" << std::endl;
	std::cout << "Its Handshake Is Firm Enough to Hurt, And When Laughing It Exhales Through His Nose for Exactly 1 Second to Save Time for More Important Matters." << std::endl;
};
void	Harl::error(void)
{
	std::cout << "THIS IS AN EXTREMELY IMPORTANT ERROR MESSAGE THAT YOU CANNOT IGNORE!!!" << std::endl;
	std::cout << "LOOK AT ME! DON'T FUCKING IGNORE ME! READ ME ALL THE WAY THROUGH! ALL THE WAY! KEEP FUCKING GOING! CLASS DISMISSED, AND BE BETTER NEXT TIME!" << std::endl;
};

void	Harl::complain(std::string level)
{
	void (Harl::*functionPointers[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
		{
			(this->*functionPointers[i])();
			return ;
		}
	}
	std::cerr << "Error. Not a valid level" << std::endl;
	std::cout << "Acceptable levels are: DEBUG / INFO / WARNING / ERROR" << std::endl;
	return ;
};
