#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "this is a mild [DEBUG] message" << std::endl;
	std::cout << "it likes food without spices or condiments, and its drink of choice is room temperature tap water without added minerals" << std::endl;
	std::cout << "it likes all kinds of (not loud) music, but cannot really name any artists it particularly likes" << std::endl;
	std::cout << "its favorite weather is a cloudy overcast, but it wants to play it safe and wear sunscreen anyway" << std::endl;
	std::cout << std::endl;
}
void	Harl::info(void)
{
	std::cout << "This is a moderate and polite [INFO] message." << std::endl;
	std::cout << "It dresses in business casual Mon-Fri, and quietly resents public non-Christmas holidays." << std::endl;
	std::cout << "Despite its frequent claims to the contrary, it does not confidently understand tax brackets" << std::endl;
	std::cout << "It votes every election year for center-left or center-right, whoever is not in the government at the time, so that no one can hold onto power for too long." << std::endl;
	std::cout << std::endl;
};
void	Harl::warning(void)
{
	std::cout << "This Is a Serious [WARNING] Message" << std::endl;
	std::cout << "Its Handshake Is Firm Enough to Hurt, And When Amused It Exhales Air Through Its Nose for Exactly 1 Second." << std::endl;
	std::cout << "It Has No Time for Stupid And Childish Joke Messages Such as These." << std::endl;
	std::cout << std::endl;
};
void	Harl::error(void)
{
	std::cout << "THIS IS AN EXTREMELY IMPORTANT [ERROR] MESSAGE THAT YOU MUST NOT IGNORE!!!" << std::endl;
	std::cout << "LOOK AT ME! DON'T FUCKING IGNORE ME! READ ME ALL THE WAY THROUGH! ALL THE WAY! I SAID ALL THE WAY! KEEP FUCKING GOING! CLASS DISMISSED, AND BE BETTER NEXT TIME!" << std::endl;
	std::cout << std::endl;
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
