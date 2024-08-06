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

		// ** comparison operators ** //
		bool	operator>( Fixed const &ori ) const;
		bool	operator<( Fixed const &ori ) const;
		bool	operator>=( Fixed const &ori ) const;
		bool	operator<=( Fixed const &ori ) const;
		bool	operator==( Fixed const &ori ) const;
		bool	operator!=( Fixed const &ori ) const;
		
		// **  arithmetic operators ** //
		Fixed	operator+( Fixed const &ori );
		Fixed	operator-( Fixed const &ori );
		Fixed	operator*( Fixed const &ori );
		Fixed	operator/( Fixed const &ori );
		
		// ** increment/decrement operators ** //
		Fixed	&operator++();
		Fixed	operator++( int );
		Fixed	&operator--();
		Fixed	operator--( int );

		
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
		static Fixed 	&min( Fixed &a, Fixed &b ); 
		const static Fixed 	&min( const Fixed &a, const Fixed &b ); 
		static Fixed	&max( Fixed &a, Fixed &b );
		const static Fixed	&max( const Fixed &a, const Fixed &b );

		Fixed	&operator=( Fixed const &ori );
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif