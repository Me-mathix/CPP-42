#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class Intern
{
private:
	/* data */

public:
	Intern();
	Intern(const Intern& ref);
	~Intern();

	Intern&	operator=(const Intern& ref);
	AForm*	makeForm(const std::string& formName, const std::string& target);
};

#endif