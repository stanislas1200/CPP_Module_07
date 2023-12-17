#include "../include/iter.hpp"

int main(void) {
	int int_array[5] = { 1, 2, 3, 4, 5 };
	char char_array[5] = { 'a', 'b', 'c', 'd', 'e' };
	float float_array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double double_array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	std::cout << "int_array: ";
	iter(int_array, 5, print);
	std::cout << std::endl;

	std::cout << "char_array: ";
	iter(char_array, 5, print);
	std::cout << std::endl;

	std::cout << "float_array: ";
	iter(float_array, 5, print);
	std::cout << std::endl;

	std::cout << "double_array: ";
	iter(double_array, 5, print);
	std::cout << std::endl;

  return 0;
}