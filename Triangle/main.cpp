#include "stdafx.h"
#include <istream>
#include <iostream>
#include <string>
#include <sstream>
#include <boost/algorithm/string.hpp>
#include "Triangle.h"


using namespace std;

bool checkNumber(char * number)
{
	stringstream str;
	str << number;
	string stringWithNumber;
	str >> stringWithNumber;
	boost::replace_all(stringWithNumber, ".", ",");
	//stringWithNumber.replace(stringWithNumber.begin(), stringWithNumber.end(), '.', ',');
	for (int i = 0; i < stringWithNumber.length(); i++)
	{
		
		if ((((int)stringWithNumber[i] > 47) && ((int)stringWithNumber[i] < 58)) || ((int(stringWithNumber[i]) == 45)))
		{
			return true;
		}
		else
		{
			return false;
			
		}
	}
}

double side(char * number)
{
	stringstream str;
	str << number;
	string stringWithNumber;
	str >> stringWithNumber;
	boost::replace_all(stringWithNumber, ".", ",");
	return atof(stringWithNumber.c_str());
}

bool sideNotNegative(double a, double b, double c)
{
	if ((a >= 0) && (b >= 0) && (c >= 0))
	{
		return true;
	}
	else
	{
		cout << "Не треугольник";
	}
}

int main(int argc, char * argv[])
{
	setlocale(LC_ALL, "Russian");
	
	if (argc == 4)
	{
		double a = side(argv[1]);
		double b = side(argv[2]);
		double c = side(argv[3]);
		if (sideNotNegative(a, b, c) == 1)
		{
			if ((checkNumber((argv[1])) && (checkNumber(argv[2])) && (checkNumber(argv[3]))))
			{
				{
					CTriangle Triangle1(a, b, c);
					ShowInfo(Triangle1);
				}
			}
			else
			{
				cout << "Укажите длины сторон в качестве параметров. Формат ввода: Triangle.exe a b c";
			}
		}
	}
	else
	{
		cout << "Укажите длины сторон в качестве параметров. Формат ввода: Triangle.exe a b c";
	}
	return 0;
}

