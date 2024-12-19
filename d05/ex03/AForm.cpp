#include <iostream>
#include "AForm.hpp"

AForm::AForm(const std::string& name, int grade_to_sign, int grade_to_execute) : 
	_name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) 
{
	if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw GradeTooHighException();
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw GradeTooLowException();
	std::cout << "[AForm] " << "create!!" << std::endl;
}

AForm::AForm(const AForm& ref) : _grade_to_sign(ref._grade_to_sign), _grade_to_execute(ref._grade_to_execute)
{
	*this=ref;
	std::cout << "[AForm] " << "copy!!" << std::endl;
}

AForm::~AForm()
{
	std::cout << "[AForm] " << "delete!!" << std::endl;
}

AForm&	AForm::operator=(const AForm& ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_is_signed = ref._is_signed;
	}
	std::cout << "[AForm] " << "operator=!!" << std::endl;
	return (*this);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (_grade_to_sign < bureaucrat.getGrade())
		throw GradeTooLowException();
	_is_signed = true;
}

std::string AForm::formName() const
{
	return _name;
} 

bool AForm::formIsSigned() const 
{
	return _is_signed;
}

int  AForm::formGradeToSign() const
{
	return _grade_to_sign;
} 

int  AForm::formGradeToExec() const
{
	return _grade_to_execute;
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "Form is not signed";
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
	out << "------------------------------------------------------------" << std::endl;
	out << "Form name : " << form.formName() << std::endl;
	if (form.formIsSigned())
		out << "Form signed : " << "True" << std::endl;
	else
		out << "Form signed : " << "False" << std::endl;
	out << "Form grade to sign : " << form.formGradeToSign() << std::endl;
	out << "Form grade to Execute : " << form.formGradeToExec() << std::endl;
	out << "------------------------------------------------------------" << std::endl;
	return out;
}
