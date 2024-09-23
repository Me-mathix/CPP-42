#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
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
		void promotion();
		void destitution();
};

#endif