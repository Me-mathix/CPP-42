#include <iostream>
#include "Form.hpp"

Form::Form(const std::string& name, int grade_to_sign, int grade_to_execute) : 
	_name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) 
{
	if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw GradeTooHighException();
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw GradeTooLowException();
	std::cout << "[Form] " << "create!!" << std::endl;
}

Form::Form(const Form& ref) :_name(ref._name), _is_signed(ref._is_signed), _grade_to_sign(ref._grade_to_sign), _grade_to_execute(ref._grade_to_execute)
{
	std::cout << "[Form] " << "copy!!" << std::endl;
}

Form::~Form()
{
	std::cout << "[Form] " << "delete!!" << std::endl;
}

Form&	Form::operator=(const Form& ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_is_signed = ref._is_signed;
	}
	std::cout << "[Form] " << "operator=!!" << std::endl;
	return (*this);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (_grade_to_sign < bureaucrat.getGrade())
		throw GradeTooLowException();
	_is_signed = true;
}

std::string Form::formName() const
{
	return _name;
} 

bool Form::formIsSigned() const 
{
	return _is_signed;
}

int  Form::formGradeToSign() const
{
	return _grade_to_sign;
} 

int  Form::formGradeToExec() const
{
	return _grade_to_execute;
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is too low";
}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is too high";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
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
