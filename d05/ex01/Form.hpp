#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form
{
private:
	std::string _name;
	bool		_is_signed;
	const int	_grade_to_sign;
	const int	_grade_to_execute;
public:
	Form();
	Form(const Form& ref);
	~Form();

	class GradeTooLowException : public std::exception 
	{
		public:
			const char *what () const throw ();
	};
	class GradeTooHighException : public std::exception 
	{
		public:
			const char *what () const throw ();
	};
	Form&	operator=(const Form& ref);
};

#endif