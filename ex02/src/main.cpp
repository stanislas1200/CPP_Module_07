#include "../include/Array.hpp"

# define RED "\x1b[1m\x1b[38;2;255;0;0m"
# define MB "\x1b[1m\x1b[38;2;25;25;599m"
# define GREEN "\x1b[1m\x1b[38;2;0;128;0m"
# define YELLOW "\x1b[1m\x1b[38;2;205;205;0m"
# define DV "\x1b[1m\x1b[38;2;148;0;211m"

int main(void) {
	Array<int> a(5);
	Array<int> b(5);
	Array<int> c;

	std::cout << MB "a.size(): " GREEN << a.size() << std::endl;

	for (unsigned int i = 0; i < a.size(); i++) {
		a[i] = i;
		b[i] = i * 2;
	}

	std::cout << MB "a: " GREEN;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << MB "b: " GREEN;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << DV "a = b" << std::endl;
	a = b;

	std::cout << MB "a: " GREEN;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << MB "b: " GREEN;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << DV "a[0] = 19" << std::endl;
	a[0] = 19;

	std::cout << MB "a: " GREEN;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << MB "B: " GREEN;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << DV "a[5] = 19" << std::endl;
	try {
		a[5] = 19;
	}
	catch (std::exception &e) {
		std::cout << RED "Exception caught: " YELLOW << e.what() << std::endl;
	}

	std::cout << MB "a: " GREEN;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << MB "b: " GREEN;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
}