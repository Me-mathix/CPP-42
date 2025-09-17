#include "PmergeMe.hpp"


int main(int argc, char const *argv[])
{
	std::list<std::string> list_parse;
	std::list<size_t> input;
	PmergeMe mergeMe;

	for (int i = 1; i < argc; i++)
	{
		list_parse.push_back(argv[i]);
	}
	for (std::list<std::string>::iterator it = list_parse.begin(); it != list_parse.end(); it++)
	{
		if (it->find_first_not_of("1234567890") != std::string::npos)
		{
			std::cout << *it << " contain other than number" << std::endl; 
			return 0;
		}
		input.push_back(std::atoi(it->c_str()));
	}
	
	mergeMe.populateDq(input);
	mergeMe.populateLst(input);

	mergeMe.MergeInsertionSort();

	return 0;
}
