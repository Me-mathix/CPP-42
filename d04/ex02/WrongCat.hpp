#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/* data */

	public:
		WrongCat();
		WrongCat(const WrongCat& ref);
		virtual ~WrongCat();

		void makeSound() const;

		WrongCat&	operator=(const WrongCat& ref);
};

#endif