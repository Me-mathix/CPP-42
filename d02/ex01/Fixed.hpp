#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _numb;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed( const int nb );
		Fixed( const float nb );
		Fixed( Fixed const &ori );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed	&operator=( Fixed const &ori );
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif