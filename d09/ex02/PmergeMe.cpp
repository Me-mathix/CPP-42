#include <iostream>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "[PmergeMe] " << "create!!" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& ref)
{
	*this=ref;
	std::cout << "[PmergeMe] " << "copy!!" << std::endl;
}

PmergeMe::~PmergeMe()
{
	std::cout << "[PmergeMe] " << "delete!!" << std::endl;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& ref)
{
	this->dq_number = ref.dq_number;
	this->list_number = ref.list_number;
	std::cout << "[PmergeMe] " << "operator=!!" << std::endl;
	return (*this);
}

std::deque<size_t> getJacobsthal(size_t size)
{
	std::deque<size_t> jacoub;
	jacoub.push_back(0);
	jacoub.push_back(1);
	for (size_t i = 2; i < size; i++)
	{
		size_t nb = jacoub[i - 1] + 2 * jacoub[i - 2];
		if (nb > size)
			break;
		jacoub.push_back(nb);
	}
	return jacoub;
	
}


void PmergeMe::populateDq(std::list<size_t> base)
{
	dq_number = std::deque<size_t>(base.begin(), base.end());
} 

void PmergeMe::populateLst(std::list<size_t> base)
{
	list_number = base;
}


void PmergeMe::sort_list(std::list<size_t> &recusrsive)
{
	if (recusrsive.size() <= 1)
		return;

	std::list<size_t> big;
	std::list<size_t> little;
	std::list<size_t>::iterator it = recusrsive.begin();
	std::list<size_t>::iterator next;

	int i = 0;
	while (it != recusrsive.end())
	{
		next = it;
		++next;
		if (next == recusrsive.end())
		{
			little.push_back(*it);
			break;
		}
		if (*it >= *next)
		{
			big.push_back(*it);
			little.push_back(*next);
		}
		else
		{
			big.push_back(*next);
			little.push_back(*it);
		}
		it = ++next;
		i++;
	}

	sort_list(big);

	it = little.begin();
	for (std::deque<size_t>::iterator itj = jacobsthal.begin(); itj != jacobsthal.end() && *itj < little.size() - 1; itj++)
	{
		std::advance(it, *itj);
		std::list<size_t>::iterator pos = std::lower_bound(big.begin(), big.end(), *it);
		big.insert(pos, *it);
		little.erase(it);
		it = little.begin();
	}

	it = little.begin();
	size_t lil_size = little.size();
	for (size_t j = 0; j < lil_size; j++)
	{
		std::list<size_t>::iterator pos = std::lower_bound(big.begin(), big.end(), *it);
		big.insert(pos, *it);
		it++;
	}

	recusrsive = big; 
}

void PmergeMe::sort_dq(std::deque<size_t>& recusrsive)
{
	size_t size = recusrsive.size();
	if (size <= 1)
		return;

	std::deque<size_t> big;
	std::deque<size_t> little;
	size_t i = 0;

	while (i < size - 1 && recusrsive.size() > 1)
	{
		if (recusrsive[i] >= recusrsive[i + 1])
		{
			big.push_back(recusrsive[i]);
			little.push_back(recusrsive[i + 1]);
		}
		else
		{
			big.push_back(recusrsive[i + 1]);
			little.push_back(recusrsive[i]);
		}
		i += 2;
	}
	if (recusrsive.size() % 2)
	{
		little.push_back(recusrsive[recusrsive.size() - 1]);
	}

	sort_dq(big);

	for (std::deque<size_t>::iterator itj = jacobsthal.begin(); itj != jacobsthal.end() && *itj < little.size(); itj++)
	{
		std::deque<size_t>::iterator pos = std::lower_bound(big.begin(), big.end(), little[*itj]);
		big.insert(pos, little[*itj]);
		little.erase(little.begin() + *itj);
	}
	for (size_t j = 0; j < little.size(); j++)
	{
		std::deque<size_t>::iterator pos = std::lower_bound(big.begin(), big.end(), little[j]);
		big.insert(pos, little[j]);
	}


	recusrsive = big; 
}

void PmergeMe::MergeInsertionSort()
{
	jacobsthal = getJacobsthal(dq_number.size());
	std::cout << "Befor : ";
	for (std::deque<size_t>::iterator it = dq_number.begin(); it != dq_number.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	double before_lst = std::clock();
	sort_list(list_number);
	double after_lst = std::clock();

	double before_dq = std::clock();
	sort_dq(dq_number);
	double after_dq = std::clock();
	
	std::cout << "After : ";
	for (std::deque<size_t>::iterator it = dq_number.begin(); it != dq_number.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << list_number.size() << " elements with std::list : " << 1000.0 * (after_lst - before_lst) / CLOCKS_PER_SEC << "m/s | " << (after_lst - before_lst) / CLOCKS_PER_SEC << "s" << std::endl;
	std::cout << "Time to process a range of " << dq_number.size() << " elements with std::deque : " << 1000.0 * (after_dq - before_dq) / CLOCKS_PER_SEC << "m/s | " << (after_dq - before_dq) / CLOCKS_PER_SEC << "s" << std::endl;

}
