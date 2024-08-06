#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;
	public:
		ClapTrap();
		ClapTrap( std::string name);
		ClapTrap( ClapTrap const &ori );
		~ClapTrap();

		ClapTrap	&operator=( ClapTrap const &ori );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif