#pragma once
class CTriangle
{
public:
	CTriangle(double a, double b, double  c);

	bool CheckTriangle()const;
	bool CheckEquilateralTriangle()const;
	bool CheckIsoscelesTriangle()const;

private:
	float a, b, c;
};

void ShowInfo(CTriangle const& triangle);
