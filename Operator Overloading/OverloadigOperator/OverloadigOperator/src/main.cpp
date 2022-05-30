#include <iostream>
#include "Mystring.h"


int main() {
	Mystring a{ "Hello" };
	Mystring b;

	b = a;

	b = "this is a test";
	
	std::cout << (b == a) << std::endl;

	a.display();
	Mystring aa = -a;
	aa.display();

	
	Mystring empty;
	Mystring larry("Larry");
	Mystring stooge{ larry };

	empty.display();
	larry.display();
	stooge.display();

	return 0;
}