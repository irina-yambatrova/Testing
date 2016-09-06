#include "stdafx.h"
#include <istream>
#include <iostream>
#include <string>
#include <sstream>
#include "Triangle.h"


using namespace std;

bool checkNumber(char * number)
{
	stringstream str;
	str << number;
	string stringWithNumber;
	str >> stringWithNumber;
	for (int i = 0; i < stringWithNumber.length(); i++)
	{
		if (((int)stringWithNumber[i] > 47) && ((int)stringWithNumber[i] < 58))
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
		cout << "������� ����� ������ � �������� ����������. ������ �����: Triangle.exe a b c";
	}
}

int main(int argc, char * argv[])
{
	setlocale(LC_ALL, "Russian");
	if (((argc == 4)) && (checkNumber((argv[1])) && (checkNumber(argv[2])) && (checkNumber(argv[3]))))
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
		cout << "������� ����� ������ � �������� ����������. ������ �����: Triangle.exe a b c";
	}
	return 0;

}

