//============================================================================
// Name        : template-function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class V>
V big(V a,V b)
{
	if(a>b)
	{
		return a;

	}
	else
	{
		return b;
	}
}
int main() {
	cout << big(3,4);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
