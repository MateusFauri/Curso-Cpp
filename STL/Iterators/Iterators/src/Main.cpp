#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>


void display(const std::vector<int>& vec)
{
	std::cout << "[";
	for (auto const& i : vec)
	{
		std::cout << i << " ";
	}
	std::cout << "]" << std::endl;
}

void test1()
{
	std::cout << "\n===============================================" << std::endl;
	std::vector<int> nums1{ 1,2,3,4,5 };
	auto it = nums1.begin();
	std::cout << *it << std::endl;

	it++;
	std::cout << *it << std::endl;

	it += 2;
	std::cout << *it << std::endl;

	it -= 2;
	std::cout << *it << std::endl;

	it = nums1.end() - 1;
	std::cout << *it << std::endl;
}

void test2()
{
	std::cout << "\n===============================================" << std::endl;
	std::vector<int> nums1{ 1,2,3,4,5 };

	// posso criar um std::vector<int>::const_iterator para ele ser constante
	std::vector<int>::iterator it = nums1.begin();  // posso usar rbegin() para ser reverso ou crbegin() para ser reverso e constante
	while (it != nums1.end())
	{
		std::cout << *it << std::endl;
		it++;
	}

	it = nums1.begin();
	while (it != nums1.end())
	{
		*it = 0;
		it++;
	}

	display(nums1);

}

void test3()
{
	std::cout << "\n===============================================" << std::endl;
	
	std::map<std::string, std::string> favorites
	{
		{"Frank", "C++"},
		{"Bill","Java"},
		{"James","Haskell"}
	};

	auto it3 = favorites.rbegin();
	while (it3 != favorites.rend())
	{
		std::cout << it3->first << ": " << it3->second << std::endl;
		it3++;
	}
}


int main() 
{
	// test1();
	//test2();
	test3();


	return 0;
}