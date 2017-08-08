#include <iostream>
#include <string>
#include "Header.h"

using namespace std;



	void clockType::setTime(int timeHr, int timeMin, int timeSec) { //sets regular time
		if (0 <= timeHr&& timeHr < 24) {
			hour = timeHr;
			
		}
		else 
			hour = 0;

		if (0 <= timeMin && timeMin < 60) {
			min = timeMin;
			
		}
			
		else 
			min = 0;

		if (0 <= timeSec && timeSec < 60) {
			sec = timeSec;
		}
			
		else 
			sec = 0;
}
	
	void clockType::getTime(int& hours, int& minutes, int& seconds) const { //gets regular time
		hours = hour;
		minutes = min;
		seconds = sec;
	}
	
	clockType clockType::operator++(int u) //overloaded unary operator to increment
	{
		
		clockType temp = *this;

		
			sec++;
		if (sec > 59) {
			sec = 0;
		}
		if (sec == 0) {
			min++;
			if (min > 59) {
				min = 0;
			}
		}
		if (min == 0 && sec == 0) {
			hour++;
			if (hour > 23) {
				hour = 0;
			}
		}
	
		return temp; // return saved state
	}
	std::ostream& operator<< (std::ostream &out, const clockType &d) // overloaded out stream operator to be able to print increment
	{
		if (d.hour < 10) 
			out << '0';
		out << d.hour << ':';
		

		if (d.min < 10) 
			out << '0';
		out << d.min << ':';
			
		
		if (d.sec < 10) 
			out << '0';
		out << d.sec;
	


		return out;
		
	}
	istream& operator >> (istream& in,  clockType& d) { //overloaded in stream operator to be able to accept input to increment
		char ch;

		in >> d.hour;

		if (d.hour < 0 || d.hour >= 24)
			d.hour = 0;

		in.get(ch);
		in >> d.min;
		if (d.min < 0 || d.min >= 60) {
			d.min = 0;
		}

		in.get(ch);
		in >> d.sec;

		if (d.sec < 0 || d.sec >= 60) {
			d.sec = 0;
		}
		return in;


	}
	clockType::clockType(int hours, int minutes, int seconds) { // sets contructor time
		setTime(hours, minutes, seconds);
	}



	