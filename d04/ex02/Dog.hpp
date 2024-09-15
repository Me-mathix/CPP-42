#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& ref);
		virtual ~Dog();

		void makeSound() const;
		void thinking()	const;

		Dog&	operator=(const Dog& ref);
};

#endif