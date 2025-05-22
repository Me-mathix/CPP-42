#include <iterator>

template <typename T>
typename T::iterator  easyfind(T &container, int lf)
{
    typename T::iterator it_start = container.begin();
    while (it_start != container.end())
    {
        if (*it_start == lf)
            return (it_start);
        it_start++;       
    }
    return container.end();
}