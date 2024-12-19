#include <iostream>
#include "RobotomyRequestForm.hpp"
#include <cstdlib> 

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target_name(target)
{
	std::cout << "[RobotomyRequestForm] " << "create!!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : AForm(ref.formName(), ref.formGradeToSign(), ref.formGradeToExec()), _target_name(ref._target_name)
{
	*this=ref;
	std::cout << "[RobotomyRequestForm] " << "copy!!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RobotomyRequestForm] " << "delete!!" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	if (this != &ref)
	{
		this->_target_name = ref._target_name;
	}
	std::cout << "[RobotomyRequestForm] " << "operator=!!" << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!formIsSigned())
		throw FormNotSignedException();
	if (formGradeToExec() < executor.getGrade())
		throw GradeTooLowException();

	static int succes_rate = 0;
	std::cout << "*some drilling noises* bbbbbbbzzzzzzzzzzzz bzzzzzzzzzz" << std::endl;
	if (succes_rate++ % 2)
		std::cout << _target_name << " has been robotomized" << std::endl;
	else 
		std::cout << _target_name << " robotomy procces has failed " << std::endl;


}