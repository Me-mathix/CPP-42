#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(int i, const std::string name);
		Bureaucrat(const Bureaucrat& ref);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& ref);
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
		void				promotion();
		void				destitution();
		const	std::string	getName() const;
		int					getGrade() const;
		void 				signForm(AForm &form);
		void				executeForm(AForm& form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif