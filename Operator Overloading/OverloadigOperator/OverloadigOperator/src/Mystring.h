#pragma once
class Mystring
{
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& in, Mystring& rhs);
private:
	char* str;

public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source); //Copy constructor
	Mystring(Mystring&& source);      //Move constructor
	~Mystring();

	Mystring& operator=(const Mystring& rhs);  //Copy assignment
	Mystring& operator=(Mystring&& rhs); //Move assignment

	Mystring operator-() const; // make lowercase
	Mystring operator+(const Mystring &rhs) const; //concatenate
	bool operator==(const Mystring &rhs) const;

	void display() const;
	int get_length() const;
	const char* get_str() const;
};

