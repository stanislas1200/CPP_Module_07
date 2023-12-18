#include "../include/whatever.hpp"

# define RED "\x1b[1m\x1b[38;2;255;0;0m"
# define MB "\x1b[1m\x1b[38;2;25;25;599m"
# define GREEN "\x1b[1m\x1b[38;2;0;128;0m"
# define YELLOW "\x1b[1m\x1b[38;2;205;205;0m"
# define DV "\x1b[1m\x1b[38;2;148;0;211m"
# define C "\x1b[0m"

int main(void) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << MB "a = " GREEN << a << MB ", b = " GREEN << b << std::endl;
	std::cout << MB "min( a, b ) = " GREEN << ::min( a, b ) << std::endl;
	std::cout << MB "max( a, b ) = " GREEN << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << MB "c = " GREEN << c << MB ", d = " GREEN << d << std::endl;
	std::cout << MB "min( c, d ) = " GREEN << ::min( c, d ) << std::endl;
	std::cout << MB "max( c, d ) = " GREEN << ::max( c, d ) << C << std::endl;
	return 0;
}