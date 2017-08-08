#include <iostream>
#include <string>
#include "Source.h"

using namespace std;

int main() {
	cout << "PRINT" << endl;
	Source setR;
	setR.setHeight();
	setR.setRadius();
	setR.shipCost();
	setR.costPSQFT();
	setR.findVolume();
	setR.volToLiter();
	setR.costToShip();
	setR.paintArea();
	setR.paintCost();
	setR.out();
	system("PAUSE");
	//Source setHeight();
	return 0;

};
