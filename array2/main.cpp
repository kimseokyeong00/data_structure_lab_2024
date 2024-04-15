#include <cstdio>
#include "lectangle.h"
//#include"Car.h"

void main() {
/*
	Car myCar(50, "k3", 4);
	Car yourCar(100, "k5", 3);
	myCar.speedUp();
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();
	SportsCar()*/
	Rectangle r(10, 20);
	double perimeter = r.getPerimeter();
	std::cout << "Rectangle 1:" << std::endl;
	std::cout << "Area:" << r.getArea() << std::endl;
	std::cout << "perimeter:" << perimeter << std::endl;
	std::cout << "is square?:" << std::boolalpha << r.isSquare() << std::endl;
}
