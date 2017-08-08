#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <limits>
#include <cstddef>
#include <algorithm>
#include <functional> 
#include <cctype>
#include <locale>

using namespace std;

class convert {
public: 
	string inP;
	static inline string &ltrim(string &s) {
		s.erase(s.begin(), find_if(s.begin(), s.end(),
			not1(ptr_fun<int, int>(isspace))));
		return s;
	}
	
	void setM();
	void finding();
	void getM(double&, double&) const;

	double conversion();

	void print() const;



private: 
	
	double feet;
	double in;


};


