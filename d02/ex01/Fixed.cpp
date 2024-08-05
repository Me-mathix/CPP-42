#include "Fixed.hpp"

Fixed::Fixed() : _numb(0)
{
	std::cout << "Base constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &ori )
{
	std::cout << "Copy constructor called With numb : " << ori._numb << std::endl;
	*this = ori;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const &ori )
{
	std::cout << "Copy assignment operator called with numb : " << ori._numb << std::endl;
	this->_numb = ori.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return this->_numb;
}

void Fixed::setRawBits( int const raw )
{
	this->_numb = raw;
}