#include "Harl.hpp"

Harl::Harl()
{
	this->_function[0] = &Harl::debug;
	this->_function[1] = &Harl::info;
	this->_function[2] = &Harl::warning;
	this->_function[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string lvl_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			lvl_index;

	for (size_t i = 0; i < 4; i++)
	{
		if (lvl_list[i] == level)
			lvl_index = i;
	}
	switch (lvl_index) 
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
  			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}