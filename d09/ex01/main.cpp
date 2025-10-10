#include "RPN.hpp"

int	main(int argc, char const *argv[]) {
	if (argc != 2) {
		std::cerr << "you must provide only one arguments" << std::endl;
		return 1;
	}
	try
	{
		RPN	rpn;
		std::cout << rpn.execute(argv[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}