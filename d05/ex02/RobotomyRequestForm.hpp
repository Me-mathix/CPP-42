#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target_name;
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& ref);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& ref);
		void execute(Bureaucrat const& executor) const;
};

#endif