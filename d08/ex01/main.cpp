#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

void basicTest() {
	std::cout << "Basic Test" << std::endl;
	Span sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

void overflowTest() {
	std::cout << "\nOverflow Test" << std::endl;
	Span sp(2);

	try {
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
	} catch (const std::exception& e) {
		std::cout << "Caught expected exception: " << e.what() << std::endl;
	}
}

void notEnoughNumbersTest() {
	std::cout << "\nNot Enough Numbers Test" << std::endl;
	Span sp(3);
	sp.addNumber(42);

	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Caught expected exception on shortestSpan: " << e.what() << std::endl;
	}

	try {
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Caught expected exception on longestSpan: " << e.what() << std::endl;
	}
}

void largeTest() {
	std::cout << "\nLarge Test (10,000 Numbers)" << std::endl;
	Span sp(10000);
	std::srand(std::time(0));

	for (int i = 0; i < 10000; ++i)
		sp.addNumber(std::rand());

	try {
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
}

void duplicateTest() {
	std::cout << "\nDuplicate Numbers Test" << std::endl;
	Span sp(3);
	sp.addNumber(10);
	sp.addNumber(10);
	sp.addNumber(10);

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

void iteratorTest() {
	std::cout << "\nIterator Test" << std::endl;
	std::vector<int> test;

	test.push_back(123);
	test.push_back(-1);
	test.push_back(1);
	test.push_back(3);
	test.push_back(4);

	Span sp(5);

	sp.addNumbers(test.begin(), test.end());

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

void copyAndAssign() {
	std::cout << "\nCopy And Assign Operator Test" << std::endl;
	Span sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	Span copy(sp);

	std::cout << "Shortest span: (on copy) " << copy.shortestSpan() << std::endl;
	std::cout << "Longest span: (on copy) " << copy.longestSpan() << std::endl;

	Span assign = sp;

	std::cout << "Shortest span: (on assign) " << assign.shortestSpan() << std::endl;
	std::cout << "Longest span: (on assign) " << assign.longestSpan() << std::endl;
}

int main() {
	basicTest();
	overflowTest();
	notEnoughNumbersTest();
	duplicateTest();
	largeTest();
	iteratorTest();
	copyAndAssign();

	return 0;
}