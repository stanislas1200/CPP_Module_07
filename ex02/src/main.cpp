#include "../include/Array.hpp"

# define RED "\x1b[1m\x1b[38;2;255;0;0m"
# define MB "\x1b[1m\x1b[38;2;25;25;599m"
# define GREEN "\x1b[1m\x1b[38;2;0;128;0m"
# define YELLOW "\x1b[1m\x1b[38;2;205;205;0m"
# define DV "\x1b[1m\x1b[38;2;148;0;211m"
# define C "\x1b[0m"

void print(Array<int> arr){
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main(void) {
	Array<int> a(5);
	Array<int> b(5);
	Array<char> d;

	std::cout << MB "d.size(): " GREEN << d.size() << std::endl;
	std::cout << MB "a.size(): " GREEN << a.size() << std::endl;

	for (unsigned int i = 0; i < a.size(); i++) {
		a[i] = i;
		b[i] = i * 2;
	}

	std::cout << MB "a: " GREEN;
	print(a);
	std::cout << MB "b: " GREEN;
	print(b);

	std::cout << DV "a = b, c(a)" << std::endl;
	a = b;

	Array<int> c(a);
	std::cout << MB "c: " GREEN;
	print(c);
	std::cout << MB "a: " GREEN;
	print(a);
	std::cout << MB "b: " GREEN;
	print(b);

	std::cout << DV "a[0] = 19" << std::endl;
	a[0] = 19;

	std::cout << MB "c: " GREEN;
	print(c);
	std::cout << MB "a: " GREEN;
	print(a);
	std::cout << MB "b: " GREEN;
	print(b);

	std::cout << DV "a[5] = 19" << std::endl;
	try {
		a[5] = 19;
	}
	catch (std::exception &e) {
		std::cout << RED "Exception caught: " YELLOW << e.what() << std::endl;
	}

	std::cout << MB "a: " GREEN;
	print(a);
	std::cout << MB "b: " GREEN;
	print(b);
}