#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat alice(50, "Alice");
		Bureaucrat bob(100, "Bob");

		Form taxForm("Tax Form", 75, 50);

		std::cout << taxForm << std::endl;

		alice.signForm(taxForm); // Should succeed
		std::cout << taxForm << std::endl;

		bob.signForm(taxForm); // Should fail
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
