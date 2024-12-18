#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target_name(target)
{
	std::cout << "[ShrubberyCreationForm] " << "create!!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : AForm(ref.formName(), ref.formGradeToSign(), ref.formGradeToExec()), _target_name(ref._target_name)
{
	std::cout << "[ShrubberyCreationForm] " << "copy!!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[ShrubberyCreationForm] " << "delete!!" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	*this=ref;
	std::cout << "[ShrubberyCreationForm] " << "operator=!!" << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (!formIsSigned())
		throw FormNotSignedException();
	if (formGradeToExec() < executor.getGrade())
		throw GradeTooLowException();

	std::string filename = _target_name + "_shrubbery";
	std::ofstream file(filename.c_str());
	file << "              v .   ._, |_  .," << std::endl;
	file << "           `-._\\/  .  \\ /    |/_" << std::endl;
	file << "               \\  _\\, y | \\//" << std::endl;
	file << "         _\\_.___\\, \\/ -.\\||" << std::endl;
	file << "           `7-,--.`._||  / / ," << std::endl;
	file << "           /'     `-. `./ / |/_.'" << std::endl;
	file << "                     |    |//" << std::endl;
	file << "                     |_    /" << std::endl;
	file << "                     |-   |" << std::endl;
	file << "                     |   =|" << std::endl;
	file << "                     |    |" << std::endl;
	file << "--------------------/ ,  . \\--------._" << std::endl;
	file.close();
}