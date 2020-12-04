//============================================================================
// Name        : cplus-plus.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

class Rectangle
{
public:
	int length;
	int breadth;

	int area()
	{
		return length*breadth;
	}

	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main() {

	Rectangle *p=new Rectangle();
	p->length=5;
	p->breadth=15;
	std::cout <<"Area is :" << p->area()<<std::endl;
	std::cout <<"Perimeter is :" << p->perimeter()<<std::endl;
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0;
}
