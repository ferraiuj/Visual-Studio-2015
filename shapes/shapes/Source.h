#include <iostream>

using namespace std;

class Source {

public:

	double setRadius()
	{
		cout << "Please enter radius in feet " << endl;
		cin >> radius;
		return radius;
	}
	double setHeight() {
		cout << "Please enter height in feet " << endl;
		cin >> height;
		return height;
	}
	double shipCost() {
		cout << "Please enter shipping cost per liter " << endl;
		cin >> shippingCostPerLiter;
		return shippingCostPerLiter;
	}
	double costPSQFT() {
		cout << "Please enter paint cost per square foot " << endl;
		cin >>costSqFt;
		return costSqFt;
	}
	double findVolume() {
		volume = 3.1415 * (radius * radius) * height;
		return volume;
	}
	double volToLiter() {
		literTot = findVolume() * 28.3168;
		return literTot;
	}
	double costToShip() {
		shipCostt = shippingCostPerLiter * volToLiter();
		return shipCostt;
	}
	double paintArea() {
		area = 2 * 3.1415 * radius * height + (2 * 3.1415 * (radius * radius));
		return area;
	}
	double paintCost() {
		paint = costSqFt * area;
		return paint;
	}
	void out() {
		cout << "Total Shipping Cost = "  << shipCostt << endl;
		cout << "Total Paint Cost = " << paint << endl;

	}

private:

	double radius;
	double height;
	double shippingCostPerLiter;
	double costSqFt;
	double volume;
	double shipCostt;
	double literTot;
	double paint;
	double area;

};
