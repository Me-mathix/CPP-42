#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		/* data */

	public:
		Cat();
		Cat(const Cat& ref);
		virtual ~Cat();

		void makeSound() const;

		Cat&	operator=(const Cat& ref);
};

#endif