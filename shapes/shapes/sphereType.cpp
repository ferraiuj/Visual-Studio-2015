/*#include <iostream>

using namespace std;

class sphereType{
	public:
		double setRadius(double r) 
		{
			cout << "Please enter radius in feet " << endl;
			cin >> r;
			radius = r;
			return radius;
		}
		double setHeight(double h) {
			cout << "Please enter height in feet " << endl;
			cin >> h;
			height = h;
			return height;
		}
		double shipCost(double s) {
			cout << "Please enter shipping cost per liter " << endl;
			cin >> s;
			shippingCostPerLiter = s;
			return shippingCostPerLiter;
		}
		double costPSQFT(double p) {
			cout << "Please enter paint cost per square foot " << endl;
			cin >> p;
			costSqFt = p;
			return costSqFt;
		}
		double findVolume() {
			volume = 3.1415 * (radius * radius) * height;
		}
		double getVolume() {
			return volume;
		}
		double getHeight() {
			return height;
		}
		double getRadius() {
			return radius;
		}
		double volToLiter() {
			literTot = volume * 28.3168;
		}
		double costToShip() {
			shipCostt = shippingCostPerLiter * literTot;
			return shipCostt;
		}
		void print() {
			cout << "Total Shipping Cost = " << shipCostt << endl;

		}

	private:
		double radius;
		double height;
		double shippingCostPerLiter;
		double costSqFt;
		double volume;
		double shipCostt;
		double literTot;

};*/