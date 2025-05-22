#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp" // assuming easyfind is in this file

int main()
{
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Test 1: Element found
    auto it = easyfind(vec, 30);
    if (it != vec.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found" << std::endl;

    // Test 2: Element not found
    it = easyfind(vec, 99);
    if (it != vec.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found" << std::endl;

    // Test 3: Using with list
    std::list<int> lst = {5, 15, 25};
    auto it2 = easyfind(lst, 15);
    if (it2 != lst.end())
        std::cout << "Found in list: " << *it2 << std::endl;
    else
        std::cout << "Not found in list" << std::endl;

    return 0;
}
