#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
	private:
		std::string _name;
		bool		_is_signed;
		const int	_grade_to_sign;
		const int	_grade_to_execute;
	public:
		AForm(const std::string& name, int _grade_to_sign, int _grade_to_execute);
		AForm(const AForm& ref);
		virtual ~AForm();

		AForm&		operator=(const AForm& ref);
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
		class FormNotSignedException : public std::exception 
		{
			public:
				const char *what () const throw ();
		};
		void		beSigned(Bureaucrat &bureaucrat);
		std::string	formName() const;
		bool		formIsSigned() const;
		int 		formGradeToSign() const;
		int 		formGradeToExec() const;
		virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif