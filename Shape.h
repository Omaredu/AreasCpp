#pragma once
#include <iostream>

class Shape
{	
public:
	Shape(float iWidth, float iHeight);
	float area();
	float perimeter();

protected:
	float width;
	float height;
};

