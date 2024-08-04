#ifndef WEAPON_H
# define WEAPON_H
#include "iostream"

class Weapon
{
	private:
		std::string _type;			
	public:
		Weapon();
		~Weapon();
		std::string getType();
		std::string setType( std::string name );
};


#endif