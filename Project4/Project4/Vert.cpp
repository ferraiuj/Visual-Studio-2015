


//Jacob Ferraiuolo


#include <iostream>
#include "Vert.h"
#include <string>
#include <list>
#include <limits>
#include <cstddef>
#include <algorithm>
#include <functional> 
#include <cctype>
#include <locale>
#include <sstream>


using namespace std;

convert con;

string input;
stringstream ss;
stringstream sa;
string foot;
string ench;
double cFinal;
double feet;
double inche;
const double ftToCent = 30.48;
const double inToCent = 2.54;
int place;
int periodCount;
int apostrophe;
int quote;
int periodPos1;
int periodPos2;

int error = 1;

void convert::setM() {
while (error > 0) {
	
	std::cout << "Type (ex. ft'inch\") the length " << endl;
		getline(cin, input);
	std::string::size_type sz;
	std::size_t apos = input.find("'");
	std::size_t quot = input.find("\"");
	std::size_t news = input.find("b");
	std::size_t news1 = input.find_first_of("b");
	std::size_t news2 = input.find_last_of("b");
	std::size_t dec1 = input.find_first_of(".");
	std::size_t dec2 = input.find_first_of(".", apos + 1);
	std::size_t found = input.find_first_of("qwertyuiopasdfghjklzxcvbnm!@#$%^&*()-=[];,/\\=-`~|}{:><?QWERTYUIOPLKJHGFDSAZXCVBNM.  ");
	std::size_t found2 = input.find_first_of("\"'");
	std::size_t found1 = input.find_first_of("qwertyuiopasdfghjklzxcvbnm!@#$%^&*()-=[];,/\=-`~|}{:><?\"'QWERTYUIOPLKJHGFDSAZXCVBNM. ");

	

		

		error = 0;

		while (input.length() == 0) {
			std::cout << "must enter a value" << endl;
			error++;
			getline(cin, input);
			std::cout << "error" << error << endl;
		}
		std::cout << "error" << error << endl;
		while (input.at(0) == '\'' || input.at(0) == '\"') { 

			try {

				if (input.at(0) == '\'' || input.at(0) == '\"') {
					throw input;
				}

			}
			catch (...) {

				std::cout << "Missing or misplaced ' or a \" " << endl;
				getline(cin, input);
				error++;
				apos = input.find("'");
				quot = input.find("\"");
			}
		}

		string qq;
		string aa;
		quot = input.find("\"");
		apos = input.find("'");

		if (apos == -1) {
			char q = 'b';
			ss << q;
			ss >> qq;
			a = -1;
		}
		else {
			char q = input.at(apos);
			ss << q;
			ss >> qq;
			a = 0;
		}


		if (quot == -1) {
			char qu = 'b';
			sa << qu;
			sa >> aa;
			q = -1;
		}
		else {
			char qu = input.at(quot);
			sa << qu;
			sa >> aa;
			q = 0;
		}
		while (quot == -1 && apos == -1) {
			try {
				if (quot == -1 && apos == -1) {
					throw input;
				}
			}
			catch (...) {
				cout << "You must have either ' or \" included in the value" << endl;
				error += 2;
				getline(cin, input);
				std::cout << "error" << error << endl;
			}
		}

		while (found != std::string::npos) { 

			if (found + 1 < input.length()) {
				if (input[found] == '.') {
					periodCount++;
					std::cout << periodCount << endl;
				}
			}
			cout << input << endl;
			input[found] = 'a';
			found = input.find_first_of("qwertyuiopasdfghjklzxcvnm!@#$%^&*()-=[];,/\=-`~|}{:><?QWERTYUIOPLKJHGFDSAZXCVBNM. \\ ", found + 1);
			cout << input << endl;

		}

		while (found2 != std::string::npos) { 

			if (found2 + 1 < input.length()) {
				if (input[found2] == '"') {
					quote++;
					std::cout << quote << endl;
					std::cout << apostrophe << endl;
					while (quote >= 1) {

						try {

							if (quote >= 1) {
								throw input;
							}

						}

						catch (...) {
							quot = input.find("\"");
							cout << "only one Quote" << endl;
							error+= 2;
							quote = 0;
							
							getline(cin, input);
						}
					}
				}
			}
			if (found2 + 1 < input.length()) {
				if (input[found2] == '\'') {
					apostrophe++;
					while (apostrophe > 1) {
						try {
							

							if (apostrophe > 1) {
								throw input;
							}

						}
						catch (...) {
							apos = input.find("'");
							cout << "Apostrophe" << apostrophe << endl;
							cout << "Only one Apostrophe" << endl;
							error+= 2;
							apostrophe = 0;
							
							getline(cin, input);
						}
					}
				}
			}
			
			
			input[found2] = 'b';
			
			found2 = input.find_first_of("\"'", found2 + 1);
			
		}
		news = input.find_first_of("a", dec1);
		input.erase(std::remove(input.begin(), input.end(), 'a'), input.end());
		news1 = input.find_first_of("b");
		news2 = input.find_last_of("b");
		input.erase(std::remove(input.begin(), input.end(), 'b'), input.end());
		cout << " Quote" << quote << endl;
		cout << "Apostrophe" << apostrophe << endl;
		while (periodCount > 2) {

			try {

				if (periodCount > 2)
					throw input;
			}

			catch (...) {

				std::cout << "Format is incorrect, Place decimal accordingly (Ex. 100.52'8.57\" " << endl;
				getline(cin, input);
				error += 2;
			}
		}

		try {
			if (a != -1) {
				input.insert(news1, qq);
			}
			
			if (q != -1) {
				input.insert(news2, aa);
			}
			
			throw input;
		}
		catch (...) {
		
		}
	
		try {
			if (dec1 + 1 < input.length()) {
				input.insert(dec1, ".");

			}
			else throw input;

			if (dec2 + 1 < input.length()) {
				input.insert(dec2, ".");
			}
			else throw input;
		}
		catch (...) {

		}
		apos = input.find("'");		
		try {
			
			periodPos1 = apos - 1;

			if (periodPos1 < input.length()) {
				if (input.at(periodPos1) == '.') {
					input.erase(periodPos1, 1);
					std::cout << input << endl;

				}
				else throw input;
			}
		}
		catch (...) {

		}
		try {
			
			periodPos2 = quot - 1;

			if (periodPos1 < input.length()) {
				if (input.at(periodPos2) == '.') {
					input.erase(periodPos2, 1);
					std::cout << input << endl;
				}
				else throw input;
			}
		}
		catch (...) {

		}

		while (input.at(0) == '\'' || input.at(0) == '\"') { 

			try {

				if (input.at(0) == '\'' || input.at(0) == '\"') {
					throw input;
				}

			}
			catch (...) {

				std::cout << "Missing or misplaced ' or a \" " << endl;
				getline(cin, input);
				error++;
				apos = input.find("'");
				quot = input.find("\"");
			}
		}

		if (a != -1) {
			foot.assign(input, 0, apos);
		}
		else if (a == -1) {
			foot = "0";
		}

		if (q != -1 && a != -1) {
			ench.assign(input, apos + 1, quot - apos - 1);
		}
		else if (q == -1) {
			ench = "0";
		}
		else if (q != -1 && a == -1) {
			ench.assign(input, 0, quot);
		}

		feet = stod(foot, &sz);							// convert and parse string to double
		inche = stod(ench, &sz);						// convert and parse string to double
	
		std::cout << "foot " << foot << endl;
		std::cout << "inch " << ench << endl;
		do {
			inche = inche - 12;
			feet = feet + 1;
		} while (inche > 12);
		
	}
}

double convert::conversion() {
	feet = feet * ftToCent;
	inche = inche * inToCent;

	cFinal = feet + inche;
	return cFinal;
}

void convert::print() const {
	std::cout << "error" << error << endl;
	std::cout << " feet " << feet << endl;
	std::cout << " input " << input << endl;
	std::cout << " inche " << inche << endl;
	std::cout << "Your Feet/Inches to Centimeter conversion =  " << cFinal << endl;
}
