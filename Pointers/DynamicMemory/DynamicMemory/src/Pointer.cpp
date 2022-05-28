#include <iostream>

int main() {

	int size{ 0 };
	std::cout << "Who many students ?" << std::endl;
	std::cin >> size;

	int* pointer = new int[size];

	std::cout << pointer << std::endl;

	delete[] pointer;

	return 0;
}