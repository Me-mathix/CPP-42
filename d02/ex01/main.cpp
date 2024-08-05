#include "Fixed.hpp"

int main( void ) {
    std::cout << "Creating a\n";
    Fixed a;      

    std::cout << "Creating b from a\n";
    Fixed b(a);    

    std::cout << "Creating c\n";
    Fixed c;      

    std::cout << "Assigning c = b\n";
    c = b;         
    
    std::cout << "Getting raw bits of a\n";
    std::cout << a.getRawBits() << std::endl; 

    std::cout << "Getting raw bits of b\n";
    std::cout << b.getRawBits() << std::endl; 

    std::cout << "Getting raw bits of c\n";
    std::cout << c.getRawBits() << std::endl; 

    return 0;
}