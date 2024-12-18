#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target_name;
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& ref);
		void execute(Bureaucrat const& executor) const;
};

#endif