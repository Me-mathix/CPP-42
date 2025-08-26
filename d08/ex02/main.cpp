#include "MutantStack.hpp"
#include <list>
int main() {
	{
	std::stack<int> tstack;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	tstack.push(5);
	tstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);

	std::cout << "Stack (iteration):" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	for (; it != ite; ++it) {
		std::cout << *it << std::endl;
	}

	MutantStack<int> copy(mstack);
	std::cout << "Copy stack contents:" << std::endl;
	for (MutantStack<int>::iterator cit = copy.begin(); cit != copy.end(); ++cit) {
		std::cout << *cit << std::endl;
	}

	MutantStack<int> assign;
	assign = mstack;
	std::cout << "Assigned stack contents:" << std::endl;
	for (MutantStack<int>::iterator ait = assign.begin(); ait != assign.end(); ++ait) {
		std::cout << *ait << std::endl;
	}
	}
	std::cout << "Test MutantStack" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);

	std::cout << "MutantStack iteration:" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Test std::list" << std::endl;
	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(42);

	std::cout << "std::list iteration:" << std::endl;
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	while (mstack.empty() == false)
		mstack.pop();
	std::cout << "Final size: " << mstack.size() << std::endl;

	return 0;
}

