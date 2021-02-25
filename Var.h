#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef class Var
{
public:
	Var();
	Var(const int int_var);
	Var(const double double_var);
	Var(const char string_var[]);
	Var operator+(const Var& other);
	Var operator-(const Var& other);
	Var operator*(const Var& other);
	Var operator/(const Var& other);
	Var operator+=(const Var& other);
	Var operator-=(const Var& other);
	Var operator*=(const Var& other);
	Var operator/=(const Var& other);
	bool operator<(const Var& other);
	bool operator<=(const Var& other);
	bool operator>(const Var& other);
	bool operator>=(const Var& other);
	bool operator==(const Var& other);
	bool operator!=(const Var& other);

	friend ostream& operator<<(ostream& ost, const Var& other);
private:
	int int_Var;
	double double_Var;
	string string_Var;
};