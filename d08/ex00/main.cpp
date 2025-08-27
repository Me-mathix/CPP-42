#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main() {
	std::cout << "Test w/ vector" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 10; ++i)
		v.push_back(i);

	std::vector<int>::iterator vit = easyfind(v, 5);
	if (vit != v.end())
		std::cout << "find in vector: " << *vit << std::endl;
	else
		std::cout << "not find in vector" << std::endl;

	vit = easyfind(v, 42);
	if (vit != v.end())
		std::cout << "find in vector: " << *vit << std::endl;
	else
		std::cout << "42 not find in vector" << std::endl;


	std::cout << "\nTest w/ list" << std::endl;
	std::list<int> lst;
	for (int i = 10; i < 20; ++i)
		lst.push_back(i);

	std::list<int>::iterator lit = easyfind(lst, 15);
	if (lit != lst.end())
		std::cout << "find in list: " << *lit << std::endl;
	else
		std::cout << "not find in list" << std::endl;

	lit = easyfind(lst, 100);
	if (lit != lst.end())
		std::cout << "find in list: " << *lit << std::endl;
	else
		std::cout << "100 not find in list" << std::endl;


	std::cout << "\nTest w/ deque" << std::endl;
	std::deque<int> dq;
	for (int i = -5; i < 5; ++i)
		dq.push_back(i);

	std::deque<int>::iterator dit = easyfind(dq, -3);
	if (dit != dq.end())
		std::cout << "find in deque: " << *dit << std::endl;
	else
		std::cout << "not find in deque" << std::endl;

	dit = easyfind(dq, 99);
	if (dit != dq.end())
		std::cout << "find in deque: " << *dit << std::endl;
	else
		std::cout << "99 not find in deque" << std::endl;

	return 0;
}