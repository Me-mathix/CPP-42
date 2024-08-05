#ifndef WEAPON_H
# define WEAPON_H
#include "iostream"

class Weapon
{
	private:
		std::string _type;			
	public:
		Weapon();
		Weapon( std::string name );
		~Weapon();
		std::string const & getType();
		void				setType( std::string name );
};


#endif