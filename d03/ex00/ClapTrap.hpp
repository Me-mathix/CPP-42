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

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void attack(const std::string& target);
};


#endif