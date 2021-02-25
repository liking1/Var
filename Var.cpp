#include "Var.h"

Var::Var()
{
	int_Var = 0;
	double_Var = 0.0;
	string_Var = "NULL";
}

Var::Var(const int int_Var)
	: int_Var(int_Var) 
{
	double_Var = 0.0;
	string_Var = "NULL";
}

Var::Var(const double double_Var)
	: double_Var(double_Var) 
{
	int_Var = 0;
	string_Var = "NULL";
}

Var::Var(const char string_Var[])
	: string_Var(string_Var) 
{
	int_Var = 0;
	double_Var = 0.0;
}

bool Var::operator<(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var < tmp;
		}
		else if (other.double_Var != 0.0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var < tmp;
		}
		else {
			return this->string_Var < other.string_Var;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			double tmp = other.int_Var;
			return this->double_Var < tmp;
		}
		else if (other.string_Var != "NULL")
		{
			double tmp = stoi(other.string_Var);
			return this->double_Var < tmp;
		}
		else {
			return this->double_Var < other.double_Var;
		}
	}
	else if (this->double_Var == 0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			int tmp = other.double_Var;
			return this->int_Var < tmp;
		}
		else if (other.string_Var != "NULL")
		{
			int tmp = stoi(other.string_Var);
			return this->int_Var < tmp;
		}
		else {
			return this->int_Var < other.int_Var;
		}
	}
}

bool Var::operator<=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var <= tmp;
		}
		else if (other.double_Var != 0.0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var <= tmp;
		}
		else {
			return this->string_Var <= other.string_Var;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			double tmp = other.int_Var;
			return this->double_Var <= tmp;
		}
		else if (other.string_Var != "NULL")
		{
			double tmp = stoi(other.string_Var);
			return this->double_Var <= tmp;
		}
		else {
			return this->double_Var <= other.double_Var;
		}
	}
	else if (this->double_Var == 0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			int tmp = other.double_Var;
			return this->int_Var <= tmp;
		}
		else if (other.string_Var != "NULL")
		{
			int tmp = stoi(other.string_Var);
			return this->int_Var <= tmp;
		}
		else {
			return this->int_Var <= other.int_Var;
		}
	}
}

bool Var::operator>(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var > tmp;
		}
		else if (other.double_Var != 0.0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var > tmp;
		}
		else {
			return this->string_Var > other.string_Var;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			double tmp = other.int_Var;
			return this->double_Var > tmp;
		}
		else if (other.string_Var != "NULL")
		{
			double tmp = stoi(other.string_Var);
			return this->double_Var > tmp;
		}
		else {
			return this->double_Var > other.double_Var;
		}
	}
	else if (this->double_Var == 0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			int tmp = other.double_Var;
			return this->int_Var > tmp;
		}
		else if (other.string_Var != "NULL")
		{
			int tmp = stoi(other.string_Var);
			return this->int_Var > tmp;
		}
		else {
			return this->int_Var > other.int_Var;
		}
	}
}

bool Var::operator>=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var >= tmp;
		}
		else if (other.double_Var != 0.0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var >= tmp;
		}
		else {
			return this->string_Var >= other.string_Var;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			double tmp = other.int_Var;
			return this->double_Var >= tmp;
		}
		else if (other.string_Var != "NULL")
		{
			double tmp = stoi(other.string_Var);
			return this->double_Var >= tmp;
		}
		else {
			return this->double_Var >= other.double_Var;
		}
	}
	else if (this->double_Var == 0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			int tmp = other.double_Var;
			return this->int_Var >= tmp;
		}
		else if (other.string_Var != "NULL")
		{
			int tmp = stoi(other.string_Var);
			return this->int_Var >= tmp;
		}
		else {
			return this->int_Var >= other.int_Var;
		}
	}
}

bool Var::operator==(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var == tmp;
		}
		else if (other.double_Var != 0.0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var == tmp;
		}
		else {
			return this->string_Var == other.string_Var;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			double tmp = other.int_Var;
			return this->double_Var == tmp;
		}
		else if (other.string_Var != "NULL")
		{
			double tmp = stoi(other.string_Var);
			return this->double_Var == tmp;
		}
		else {
			return this->double_Var == other.double_Var;
		}
	}
	else if (this->double_Var == 0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			int tmp = other.double_Var;
			return this->int_Var == tmp;
		}
		else if (other.string_Var != "NULL")
		{
			int tmp = stoi(other.string_Var);
			return this->int_Var == tmp;
		}
		else {
			return this->int_Var == other.int_Var;
		}
	}
}

bool Var::operator!=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var != tmp;
		}
		else if (other.double_Var != 0.0)
		{
			string tmp = to_string(other.int_Var);
			return this->string_Var != tmp;
		}
		else {
			return this->string_Var != other.string_Var;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			double tmp = other.int_Var;
			return this->double_Var != tmp;
		}
		else if (other.string_Var != "NULL")
		{
			double tmp = stoi(other.string_Var);
			return this->double_Var != tmp;
		}
		else {
			return this->double_Var != other.double_Var;
		}
	}
	else if (this->double_Var == 0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			int tmp = other.double_Var;
			return this->int_Var != tmp;
		}
		else if (other.string_Var != "NULL")
		{
			int tmp = stoi(other.string_Var);
			return this->int_Var != tmp;
		}
		else {
			return this->int_Var != other.int_Var;
		}
	}
}

Var Var::operator+(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			tmp.string_Var = this->string_Var + otherOne;
			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			tmp.string_Var = this->string_Var + otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.string_Var = this->string_Var + other.string_Var;
			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var + other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var + otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var + other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var + other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var + otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var + other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator-(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			return tmp;
		}
		else {
			Var tmp;
			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var - other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var - otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var - other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var - other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var - otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var - other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator*(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
		else {
			Var tmp;
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(other.string_Var); j++)
				{
					if (this->string_Var[i] == other.string_Var[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var * other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var * otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var * other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var * other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var * otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var * other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator/(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			bool flag = false;
			auto otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						flag = true;
					}
				}
			}

			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			auto otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
		else {
			Var tmp;
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(other.string_Var); j++)
				{
					if (this->string_Var[i] == other.string_Var[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var / other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var / otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var / other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var / other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var / otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var / other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator+=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			tmp.string_Var = this->string_Var + otherOne;
			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			tmp.string_Var = this->string_Var + otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.string_Var = this->string_Var + other.string_Var;
			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var + other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var + otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var + other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var + other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var + otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var + other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator-=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{

	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var - other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var - otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var - other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var - other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var - otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var - other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator*=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
		else {
			Var tmp;
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(other.string_Var); j++)
				{
					if (this->string_Var[i] == other.string_Var[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var * other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var * otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var * other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var * other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var * otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var * other.int_Var;
			return tmp;
		}
	}
}

Var Var::operator/=(const Var& other)
{
	if (this->int_Var == 0 && this->double_Var == 0.0)
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			bool flag = false;
			string otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						flag = true;
					}
				}
			}

			return tmp;
		}
		else if (other.double_Var != 0.0)
		{
			Var tmp;
			string otherOne = to_string(other.int_Var);
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_Var[i] == otherOne[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
		else {
			Var tmp;
			for (size_t i = 0; i < size(this->string_Var); i++)
			{
				for (size_t j = 0; j < size(other.string_Var); j++)
				{
					if (this->string_Var[i] == other.string_Var[j])
					{
						tmp.string_Var += this->string_Var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_Var == 0 && this->string_Var == "NULL")
	{
		if (other.int_Var != 0)
		{
			Var tmp;
			tmp.double_Var = this->double_Var / other.int_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.double_Var = this->double_Var / otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.double_Var = this->double_Var / other.double_Var;
			return tmp;
		}
	}
	else if (this->double_Var == 0.0 && this->string_Var == "NULL")
	{
		if (other.double_Var != 0.0)
		{
			Var tmp;
			tmp.int_Var = this->int_Var / other.double_Var;
			return tmp;
		}
		else if (other.string_Var != "NULL")
		{
			Var tmp;
			double otherOne = stoi(other.string_Var);
			tmp.int_Var = this->int_Var / otherOne;
			return tmp;
		}
		else {
			Var tmp;
			tmp.int_Var = this->int_Var / other.int_Var;
			return tmp;
		}
	}
}

ostream& operator<<(ostream& ost, const Var& other)
{
	if (other.double_Var != 0.0)
	{
		ost << other.double_Var;
		return ost;
	}
	else if (other.int_Var != 0)
	{
		ost << other.int_Var;
		return ost;
	}
	else if (other.string_Var != "")
	{
		ost << other.string_Var;
		return ost;
	}
}