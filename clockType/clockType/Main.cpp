#include <iostream>
#include <windows.h>
#include "Header.h"
using namespace std;

int main(){
	
	clockType clck(23, 58, 58); //sets time
	
	
	for (int i = 1; i <= 20000; i++) { //code block for printing and refreshing screen
		
		std::cout << clck << endl;
		clck++;
		
		std::cout.flush();
		
		Sleep(1000);
		system("CLS");
	}
	
	
	
	return 0;
};