#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

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

		void		setName(std::string value);
		void		setHp(int value);
		void		setEp(int value);
		void		setAd(int value);
		std::string	getName(void) const ;
		int			getHp(void) const ;
		int			getEp(void) const ;
		int			getAd(void) const ;

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};


#endif