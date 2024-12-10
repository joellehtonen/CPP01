#pragma once
#include <string>
#include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl()	{};
		~Harl()	{};

		void	complainFilter(std::string level);
};