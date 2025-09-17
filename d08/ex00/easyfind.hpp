#pragma once

#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int lf)
{
	typename T::iterator result = std::find(container.begin(), container.end(), lf);
	if (result != container.end())
		return result;
	return container.end();
}