#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main() {

	std::cout << (10 == 10) << std::endl;
	std::cout << (10 == 20) << std::endl;

	std::cout << std::boolalpha; //set to true and false

	std::cout << (10 == 10) << std::endl;
	std::cout << (10 == 20) << std::endl;

	std::cout << std::noboolalpha; //set to 0 and 1 
	
	std::cout << (10 == 10) << std::endl;
	std::cout << (10 == 20) << std::endl;

	std::cout.setf(std::ios::boolalpha); //using setf methods

	std::cout << std::resetiosflags(std::ios::boolalpha); //restes to default (0,1)

	int num{ 255 };
	std::cout << std::showbase;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::oct << num << std::endl;

	std::ifstream in_file{ "../poem.txt" };
	std::ofstream out_file{ "../output.txt"};
	//std::ofstream out_file{ "../output.txt", std::ios::app };
	if (!in_file)
	{
		std::cerr << "Error opening input file" << std::endl;
		return 1;
	}
	if (!out_file)
	{
		std::cerr << "Error opening output file" << std::endl;
		return 1;
	}

	std::string line{};
	while (std::getline(in_file, line))
		out_file << line << std::endl;


	std::cout << "File copied" << std::endl;
	out_file.close();
	in_file.close();

	return 0;
}