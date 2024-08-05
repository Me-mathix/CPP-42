#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int _numb;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed( const int );
		Fixed( Fixed const &ori );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed &operator=( Fixed const &ori );
};


#endif