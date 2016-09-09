#include "stdafx.h"
#include "Triangle.h"
#include <iostream>


using namespace std;


CTriangle::CTriangle(double a , double b, double c)
	: a(a)
	, b(b)
	, c(c)
{
}

bool CTriangle::CheckTriangle()const
{
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		return true;
	}
}

bool CTriangle::CheckEquilateralTriangle()const
{
	if ((a == b) && (a == c) && (b == c))
	{
		return true;
	}
}

bool CTriangle::CheckIsoscelesTriangle()const
{
	if ((a == b) || (a == c) || (b == c))
	{
		return true;
	}
}

void ShowInfo(CTriangle const& triangle)
{
	if (triangle.CheckTriangle() == 1)
	{
		if (triangle.CheckEquilateralTriangle() == 1)
		{
			cout << "Равносторонний";
		}
		else if (triangle.CheckIsoscelesTriangle() == 1)
		{
			cout << "Равнобедренный";
		}
		else
		{
			cout << "Обычный";
		}
	}
	else
	{
		cout << "Не треугольник";
	}
}
