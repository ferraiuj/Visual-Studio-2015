#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()

{	string rom;
	int list[20];
	//list[0] = 'x';
	int value= 0;
	
	//int I =  1;
	//int V = 5;
	//int X = 10;
//	int L = 50;
	//int C = 100;
	//int D = 500;
	//int M = 1000;

	int i;
	int entValue;
	//char* b = &rom[1];
	//int ja;
	//char* d = &rom[3]; 
	//char* e = &rom[4]; 
	//char* f = &rom[5]; 
	//char* g = &rom[6]; 
	//char* h = &rom[7]; 
	//char* i = &rom[8]; 
	//char* j = &rom[9]; 
	//char* k = &rom[10];
	
	
	
	cout << "Enter Num in Roman Numerals: " << endl;
	std::getline(cin, rom);
	
	for (int z = 0; z < sizeof(rom) ; z = z+1) {
		i = z; 
		char * a = &rom[i];
		if (*a == 'm' || *a =='M') {
			//list[i] = value;
			value += 1000;
			
		}
		else if (*a == 'd' || *a == 'D') {
			//list[i] = value;
			value += 500;
	}
	}
	
	//if(*a = 'x') {
		
	//}
	
	
	
	/*if(z = D)
		
		ja = i;
		if (i == 100) {
			
			i = 0;
		}
	}	*/

	
	/*if (*c == 'M') {
		value += 1000; 
	}
	else if (*c == 'D')  {
		value += 500;
	}
	else if (*c == 'C')  {
		value += 100;
	}
	else if (*c == 'L')  {
		value += 50;
	}
	else if (*c == 'X')  {
		value += 10;
	}
	else if (*c == 'V')  {
		value += 5;
	}
	else if (*c == 'I')  {
		value += 1;
	}*/
	


	std::cout << "Hello World" << std::endl;
	std::cout << value;
	system("PAUSE");
	return 0;
}