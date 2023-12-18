#include "../include/iter.hpp"

# define MB "\x1b[1m\x1b[38;2;25;25;599m"
# define GREEN "\x1b[1m\x1b[38;2;0;128;0m"
# define C "\x1b[0m"

int main(void) {
	int int_array[5] = { 1, 2, 3, 4, 5 };
	char char_array[5] = { 'a', 'b', 'c', 'd', 'e' };
	float float_array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double double_array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	std::cout << MB "int_array: " GREEN;
	iter(int_array, 5, print);
	std::cout << std::endl;

	std::cout << MB "char_array: " GREEN;
	iter(char_array, 5, print);
	std::cout << std::endl;

	std::cout << MB "float_array: " GREEN;
	iter(float_array, 5, print);
	std::cout << std::endl;

	std::cout << MB "double_array: " GREEN;
	iter(double_array, 5, print);
	std::cout << C << std::endl;

  return 0;
}