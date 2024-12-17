#include <iostream>
#include "Form.hpp"

Form::Form() :_grade_to_execute(150), _grade_to_sign(150)
{
	std::cout << "[Form] " << "create!!" << std::endl;
}

Form::Form(const Form& ref) : _grade_to_execute(ref._grade_to_execute), _grade_to_sign(ref._grade_to_sign)
{
	*this=ref;
	std::cout << "[Form] " << "copy!!" << std::endl;
}

Form::~Form()
{
	std::cout << "[Form] " << "delete!!" << std::endl;
}

Form&	Form::operator=(const Form& ref)
{
	*this=ref;
	std::cout << "[Form] " << "operator=!!" << std::endl;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() {
    return "The Bureaucrat grade is too Low to sign this form";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "The Bureaucrat grade is too High to sign this form";
}

// std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
//     out << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade();
//     return out;
// }
