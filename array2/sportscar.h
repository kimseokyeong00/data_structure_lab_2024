#pragma once
#include "Car.h"  //상속받음

class SportsCar : public Car //상속받는다는 의미
{
public:
	bool bTurbo;
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedup() {
		if (bTurbo) speed += 20;
		if (bTurbo) speed += 20;   
	}

};

