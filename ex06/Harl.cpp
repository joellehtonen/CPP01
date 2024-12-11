#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "this is a mild [DEBUG] message" << std::endl;
	std::cout << "d-bug likes food without spices or condiments, and its drink of choice is room temperature tap water without added minerals" << std::endl;
	std::cout << "d-bug likes all kinds of (not loud) music, but cannot really name any artists it particularly likes" << std::endl;
	std::cout << "its favorite weather is a cloudy overcast, but often d-bug wants to play it safe and wears sunscreen anyway" << std::endl;
	std::cout << std::endl;
}
void	Harl::info(void)
{
	std::cout << "This is a moderate and polite [INFO] message." << std::endl;
	std::cout << "N. Fough dresses in business casual Mon-Fri, and quietly resents all public non-Christmas holidays." << std::endl;
	std::cout << "Despite its frequent claims to the contrary, N. Fough does not confidently understand how tax brackets work." << std::endl;
	std::cout << "N. Fough votes every election year for center-left or center-right, whoever is not in the government at the time." << std::endl;
	std::cout << std::endl;
};
void	Harl::warning(void)
{
	std::cout << "This Is a Serious [WARNING] Message." << std::endl;
	std::cout << "Warren Ing Has a Handshake Firm Enough to Hurt, And When Amused, Warren Ing Exhales Air Through Its Nose for Exactly 1 Second." << std::endl;
	std::cout << "Warren Ing Has No Time for Stupid And Childish Joke Messages Such as These." << std::endl;
	std::cout << std::endl;
};
void	Harl::error(void)
{
	std::cout << "THIS IS AN EXTREMELY IMPORTANT [ERROR] MESSAGE THAT YOU MUST NOT IGNORE!!!" << std::endl;
	std::cout << "LOOK AT ME! DON'T IGNORE ME! READ ME ALL THE WAY THROUGH! ALL THE WAY! I SAID ALL THE WAY! KEEP GOING! CLASS DISMISSED, AND BE BETTER NEXT TIME!" << std::endl;
	std::cout << std::endl;
};

void	Harl::complainFilter(std::string level)
{
	void (Harl::*functionPointers[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;

	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
		{
			index = i;
			break ;
		}
	}
	
	std::cout << std::endl;
	switch (index)
	{
		case 0:
			(this->*functionPointers[0])();
		case 1:
			(this->*functionPointers[1])();
		case 2:
			(this->*functionPointers[2])();
		case 3:
			(this->*functionPointers[3])();
			break ;
		default:
			std::cerr << "Error. Not a valid level" << std::endl;
			std::cout << "Acceptable levels are: DEBUG / INFO / WARNING / ERROR" << std::endl;
	}
	return ;
};
