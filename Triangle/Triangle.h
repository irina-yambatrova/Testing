#pragma once
class CTriangle
{
public:
	CTriangle(float a, float b, float  c);

	bool CheckTriangle()const;
	bool CheckEquilateralTriangle()const;
	bool CheckIsoscelesTriangle()const;

private:
	float a, b, c;
};

void ShowInfo(CTriangle const& triangle);
