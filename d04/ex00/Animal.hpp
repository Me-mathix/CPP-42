#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal( std::string name );
		Animal( const Animal& ref );
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string		getType() const; 

		Animal&	operator=(const Animal& ref);
};

#endif