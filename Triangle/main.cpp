#include "stdafx.h"
#include <istream>
#include <iostream>
#include "Triangle.h"
#include <algorithm>
#include <boost/algorithm/string.hpp>

using namespace std;

double side(char * number)
{
	stringstream str;
	str << number;
	string stringWithNumber;
	str >> stringWithNumber;
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
		cout << "”кажите длины сторон в качестве параметров. ‘ормат ввода: Triangle.exe a b c";
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
			CTriangle Triangle1(a, b, c);
			ShowInfo(Triangle1);
		}
	}
	
	else
	{ 
		cout << "”кажите длины сторон в качестве параметров. ‘ормат ввода: Triangle.exe a b c";
	}
	return 0;

}

