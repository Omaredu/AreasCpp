#pragma once
#include <iostream>

class Triangle
{
public:
	Triangle(float iWidth, float iHeight);
	float area();
protected:
	float width;
	float height;
};

