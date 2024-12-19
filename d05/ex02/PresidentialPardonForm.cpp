#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), _target_name(target)
{
	std::cout << "[PresidentialPardonForm] " << "create!!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : AForm(ref.formName(), ref.formGradeToSign(), ref.formGradeToExec()), _target_name(ref._target_name)
{
	*this=ref;
	std::cout << "[PresidentialPardonForm] " << "copy!!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[PresidentialPardonForm] " << "delete!!" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
		if (this != &ref)
	{
		this->_target_name = ref._target_name;
	}
	std::cout << "[PresidentialPardonForm] " << "operator=!!" << std::endl;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!formIsSigned())
		throw FormNotSignedException();
	if (formGradeToExec() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << _target_name << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}