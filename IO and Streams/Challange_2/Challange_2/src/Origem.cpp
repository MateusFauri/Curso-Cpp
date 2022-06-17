#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

const int width{ 30 };
const int sides{ width / 2 };
const int questionsNumber{ 5 };

int averageCalculator(std::vector<int>& vec, int size);
void lines();
void print_header();
void print_student(std::string name, int note);
void print_footer(int average);
int process_response(std::string answers, std::string answer_key);

int main()
{
	std::vector<int> notes{};
	std::string answer_key{};
	int note{ 0 };
	
	std::ifstream  studentGrades;
	studentGrades.open("../text.txt");

	if (!studentGrades)
	{
		std::cerr << "Problem opening file" << std::endl;
		return 1;
	}
	
	std::getline(studentGrades, answer_key);

	print_header();

	while (!studentGrades.eof())
	{
		std::string name, answers;
		std::getline(studentGrades, name);
		std::getline(studentGrades, answers);
		note = process_response(answers,answer_key);

		print_student(name,note);

		notes.push_back(note);
	}

	double average;
	try {
		average = averageCalculator(notes, 5);
	}
	catch (int& ex)
	{
		std::cerr << "Error trying to calculate average" << std::endl;
	}

	print_footer(average);

	studentGrades.close();

	return 0;
}

int averageCalculator(std::vector<int>& vec, int size)
{
	int all_notes{ 0 };
	if (size == 0)
		throw 0;
	for (auto note : vec)
	{
		all_notes += note;
	}
	return static_cast<double>(all_notes) / size;
}

void lines()
{
	std::cout << std::setw(width)
		<< std::setfill('-')
		<< ""
		<< std::endl;

	std::cout << std::setfill(' ');
}

void print_header()
{
	std::cout << std::setw(sides) << std::left
		<< "Student"
		<< std::setw(sides) << std::right
		<< "Score"
		<< std::endl;

	lines();
}

int process_response(std::string answers, std::string answer_key)
{
	int note{ 0 };
	for (int i = 0; i < questionsNumber; i++)
	{
		if (answers[i] == answer_key[i])
			note++;
	}
	return note;
}

void print_student(std::string name, int note) {
	std::cout << std::setw(sides) << std::left
		<< name
		<< std::setw(sides) << std::right
		<< note << std::endl;
}

void print_footer(int average) {
	lines();

	std::cout << std::setw(sides) << std::left
		<< "Average score"
		<< std::setw(sides) << std::right
		<< average << std::endl;
}