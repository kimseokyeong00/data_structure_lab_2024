#pragma once
#include "Car.h"  //��ӹ���

class SportsCar : public Car //��ӹ޴´ٴ� �ǹ�
{
public:
	bool bTurbo;
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedup() {
		if (bTurbo) speed += 20;
		if (bTurbo) speed += 20;   
	}

};

