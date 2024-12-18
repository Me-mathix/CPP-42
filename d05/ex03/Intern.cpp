#include <iostream>
# include "Intern.hpp"

Intern::Intern()
{
	std::cout << "[Intern] " << "create!!" << std::endl;
}

Intern::Intern(const Intern& ref)
{
	*this=ref;
	std::cout << "[Intern] " << "copy!!" << std::endl;
}

Intern::~Intern()
{
	std::cout << "[Intern] " << "delete!!" << std::endl;
}

Intern&	Intern::operator=(const Intern& ref)
{
	*this=ref;
	std::cout << "[Intern] " << "operator=!!" << std::endl;
	return (*this);
}

static AForm* createShrubberyCreationForm(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

static AForm* createRobotomyRequestForm(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

static AForm* createPresidentialPardon(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target)
{
	std::string formType[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm*	(*function[3])(const std::string& target);
	function[0] = &createShrubberyCreationForm;
	function[1] = &createRobotomyRequestForm;
	function[2] = &createPresidentialPardon;

	for (size_t i = 0; i < 3; i++)
	{
		if (formName == formType[i])
		{
			std::cout << "intern create this Form" << formName << std::endl;
			return function[i](target);
		}
	}
	std::cout << formName << "is not a valid type of form" << std::endl;
	return NULL;
}