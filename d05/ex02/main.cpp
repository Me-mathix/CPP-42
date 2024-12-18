#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat alice(1, "Alice");
	Bureaucrat bob(50, "Bob");

	ShrubberyCreationForm form1("home");
	RobotomyRequestForm form2("Bender");
	PresidentialPardonForm form3("Ford Prefect");

	alice.signForm(form1);
	alice.executeForm(form1);

	alice.signForm(form2);
	alice.executeForm(form2);

	alice.signForm(form3);
	alice.executeForm(form3);

	bob.executeForm(form3); // Bob should fail
	return 0;
}
