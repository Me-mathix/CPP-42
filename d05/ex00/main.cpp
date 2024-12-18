#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat john(1, "John");
		std::cout << john << std::endl;

		// Attempt a promotion that should fail
		john.promotion();
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Unknown exception caught: " << e.what() << std::endl;
	}

	return 0;
}
