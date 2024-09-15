#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal( std::string name );
		WrongAnimal( const WrongAnimal& ref );
		virtual ~WrongAnimal();

		void	makeSound() const;
		std::string		getType() const; 

		WrongAnimal&	operator=(const WrongAnimal& ref);
};

#endif