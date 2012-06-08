//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "mungo.h"

#include <iostream>
using namespace std;

void PrintMessage( int n = 5 )
{
	cout << "Your number was " << n << endl;
}

int main() {
	cout << "!!!Hello World eeee!!!" << endl; // prints !!!Hello World!!!
	Mungo m;
	m.TellMeStuff();
	m.TellMeMoreStuff();
	Bongo b;
	b.TellMeStuff();
	b.TellMeMoreStuff();
	return 0;
}
