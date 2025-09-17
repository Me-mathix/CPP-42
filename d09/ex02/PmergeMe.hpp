#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <cstdlib>
# include <list>
# include <deque>
# include <iostream>
# include <ctime>
# include <iterator>

class PmergeMe
{
private:
	std::list<size_t> list_number;
	std::deque<size_t> dq_number;
	std::deque<size_t> jacobsthal;
	void sort_list(std::list<size_t>& recusrsive);
	void sort_dq(std::deque<size_t>& recusrsive);
public:
	PmergeMe();
	PmergeMe(const PmergeMe& ref);
	~PmergeMe();
	PmergeMe&	operator=(const PmergeMe& ref);

	void MergeInsertionSort();
	void populateDq(std::list<size_t> base);
	void populateLst(std::list<size_t> base);
};

#endif