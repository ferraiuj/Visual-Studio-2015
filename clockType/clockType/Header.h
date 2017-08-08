
#include <iostream>


using namespace std;

	class clockType {
		
	friend std::ostream& operator<< (std::ostream &out, const clockType &d); //declared friend to overload out stream
	friend std::istream& operator>> (std::istream &in, const clockType &d);//declared friend to overload in stream
		public:
			
			clockType(int h = 0, int m = 0, int s = 0); //constructor with 3 parameters
				 
			void setTime(int, int, int);
			void getTime(int&, int&, int&) const;
			
			
			clockType operator++(int);// overload unary operator declaration
			

			
			
		public:
			
			int sec; //Member variables
			int min;
			int hour;
};