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

Fixed::Fixed( const int nb )
{
	std::cout << "Int constructor called" << std::endl;
	this->_numb = nb << this->_bits;
}

Fixed::Fixed( const float nb )
{
	std::cout << "float constructor called" << std::endl;
	this->_numb = roundf(nb * (1 << this->_bits));
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

float	Fixed::toFloat( void ) const
{
	return ((float) this->_numb / (1 << this->_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_numb >> this->_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return out;
}