#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal( std::string name );
	public:
		Animal( const Animal& ref );
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		std::string		getType() const; 

		Animal&	operator=(const Animal& ref);
};

#endif