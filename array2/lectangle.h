#pragma once
#include <iostream>

class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}

	double getArea() {
		return width * height;

	}
	double getPerimeter() {
		return width * (width + height);
	}
	bool isSquare() {   //true or false
		return (width == height);
	}
};