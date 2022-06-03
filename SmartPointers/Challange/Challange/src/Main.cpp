#include <iostream>
#include <memory>
#include <vector>

class Test {
	int data;
public:
	Test(int data = 0) : data {data} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
	int get_data() const { return data; }
	~Test() { std::cout << "\tTest Destructor (" << data << ")" << std::endl; }
};

auto make();
void fill(std::vector<std::shared_ptr<Test>>& vec, int num);
void display(const std::vector<std::shared_ptr<Test>>& vec);


auto make()
{
	return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

int main() {
	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	std::cout << "How many data poins do you want to enter: ";
	int num;
	std::cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);
	return 0;
}


void fill(std::vector<std::shared_ptr<Test>>& vec, int num)
{
	int temp;
	for (int i = 0; i < num; i++)
	{
		std::cout << "Enter data point [" << i << "]: ";
		std::cin >> temp;
		//std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
		vec.push_back(std::make_shared<Test>(temp));
	}
}

void display(const std::vector<std::shared_ptr<Test>>& vec)
{
	for (const auto& ptr : vec)
	{
		std::cout << ptr->get_data()<< std::endl;
	}
}
