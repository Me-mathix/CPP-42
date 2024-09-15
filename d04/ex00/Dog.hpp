#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		/* data */

	public:
		Dog();
		Dog(const Dog& ref);
		virtual ~Dog();

		void makeSound() const;

		Dog&	operator=(const Dog& ref);
};

#endif