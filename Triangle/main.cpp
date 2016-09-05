#include "stdafx.h"
#include <istream>
#include <iostream>
#include "Triangle.h"

using namespace std;


bool sideNotNegative(float a, float b, float c)
{
	if ((a > 0) && (b > 0) && (c > 0))
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
		float a = stof(argv[1]);
		float b = stof(argv[2]);
		float c = stof(argv[3]);
		if ((sideNotNegative(a,b,c)) == 1)
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

