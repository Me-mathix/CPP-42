#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
	try {
		Intern someRandomIntern;
		Bureaucrat alice(1, "Alice");

		// Test form creation
		AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
		if (form1) {
			alice.signForm(*form1);
			alice.executeForm(*form1);
			delete form1;
		}

		AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
		if (form2) {
			alice.signForm(*form2);
			alice.executeForm(*form2);
			delete form2;
		}

		AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
		if (form3) {
			alice.signForm(*form3);
			alice.executeForm(*form3);
			delete form3;
		}

		// Invalid form creation
		AForm* invalidForm = someRandomIntern.makeForm("unknown form", "Target");
		if (invalidForm) {
			delete invalidForm;
		}
	}
	catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
