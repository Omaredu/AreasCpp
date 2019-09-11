#include "Shape.h"

Shape::Shape(float iWidth, float iHeight) {
	width = iWidth;
	height = iHeight;
}

float Shape::area() {

	float area = width * height;
	std::cout << "El area de su figura es: " << std::endl;
	
	return area;
}

float Shape::perimeter() {

	float perimeter = (width * 2) + (height * 2);
	std::cout << "El perimetro de su figura es: " << std::endl;

	return perimeter;
}