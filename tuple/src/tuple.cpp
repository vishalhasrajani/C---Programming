//============================================================================
// Name        : tuple.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include<tuple>

int main() {


	tuple <string,int,int> t1;
	t1=make_tuple("VISHAL",54,98);

	cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);
	return 0;
}
