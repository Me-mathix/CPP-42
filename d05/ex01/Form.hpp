#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string _name;
		bool		_is_signed;
		const int	_grade_to_sign;
		const int	_grade_to_execute;
	public:
		Form(const std::string& name, int _grade_to_sign, int _grade_to_execute);
		Form(const Form& ref);
		~Form();

		Form&		operator=(const Form& ref);
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
		void		beSigned(Bureaucrat &bureaucrat);
		std::string	formName() const;
		bool		formIsSigned() const;
		int 		formGradeToSign() const; 
		int 		formGradeToExec() const; 
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif