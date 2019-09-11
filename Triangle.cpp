#include "Triangle.h"

Triangle::Triangle(float iWidth, float iHeight) {
	width = iWidth;
	height = iHeight;
}

float Triangle::area() {

	float area = (width * height) / 2.0;
	std::cout << "El area de su Triangulo es:" << std::endl;
	return area;
}