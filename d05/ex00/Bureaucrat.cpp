#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "[Bureaucrat] " << "create!!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	*this=ref;
	std::cout << "[Bureaucrat] " << "copy!!" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] " << "delete!!" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
	*this=ref;
	std::cout << "[Bureaucrat] " << "operator=!!" << std::endl;
	return (*this);
}

void Bureaucrat::promotion()
{
	if ((this->grade - 1) == 0)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

const char *Bureaucrat::GradeTooLowException::what() const
{
	return "the grade you tried to give is too Low";
};

const char *Bureaucrat::GradeTooHighException::what() const
{
	return "the grade you tried to give is too High";
};
