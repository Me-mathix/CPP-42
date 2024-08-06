#include "Fixed.hpp"


int main( void ) {
    Fixed fp1(10);
    Fixed fp2(20);

    Fixed& minFp = Fixed::min(fp1, fp2);
    Fixed& maxFp = Fixed::max(fp1, fp2);

    std::cout << "Min: " << minFp << std::endl;
    std::cout << "Max: " << maxFp << std::endl;

    const Fixed fp3(15);
    const Fixed fp4(25);

    const Fixed& minConstFp = Fixed::min(fp3, fp4);
    const Fixed& maxConstFp = Fixed::max(fp3, fp4);

    std::cout << "Const Min: " << minConstFp << std::endl;
    std::cout << "Const Max: " << maxConstFp << std::endl;

    return 0;
}