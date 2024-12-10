#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "THIS IS A DEBUG MESSAGE" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "THIS IS AN INFO MESSAGE" << std::endl;
};
void	Harl::warning(void)
{
	std::cout << "THIS IS A WARNING MESSAGE" << std::endl;;
};
void	Harl::error(void)
{
	std::cout << "THIS IS AN ERROR MESSAGE" << std::endl;;
};

void	Harl::complain(std::string level)
{
	void (Harl::*ptr)(void) = nullptr;

	if (level == "DEBUG")
		ptr = &Harl::debug;
	else if (level == "INFO")
		ptr = &Harl::info;
	else if (level == "WARNING")
		ptr = &Harl::warning;
	else if (level == "ERROR")
		ptr = &Harl::error;
	else
	{
		std::cerr << "Error. Not a valid level" << std::endl;
		std::cout << "Acceptable levels are: DEBUG / INFO / WARNING / ERROR" << std::endl;
		return ;
	}
	(this->*ptr)();
};
