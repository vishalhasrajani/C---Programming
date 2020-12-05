

#include <iostream>

class Rectangle
{
private:
	int length;
	int breadth;

public:

	Rectangle(int length=0,int breadth=0)  //Constructor
		{
			this->length = length;  //This pointer logic  :: this->length is the original length in private function and length is the local variable.
			this->breadth = breadth;
		}

	Rectangle(Rectangle &rect) //Copy Constructor
	{
		length=rect.length;
		breadth=rect.breadth;
	}

	void setLength(int l) //To set the length
	{
		if(l>0)
				{
					length=l;
				}
				else
				{
					length=0;
				}

	}

	void setBreadth(int b) //set breadth
		{
		if(b>0)
		{
			breadth=b;
		}
		else
		{
			breadth=0;
		}

		}

	int area() //Area
	{
		return length*breadth;
	}

	int perimeter() //Perimeter
	{
		return 2*(length+breadth);
	}

	int Calculation();



};

int Rectangle ::Calculation()  //Scope resolution Operator  " ::  "
{
	return 3*length*breadth;
}
int main() {

	Rectangle r1(10,5);
	Rectangle r2(r1);
	std::cout<<r2.area()<<std::endl;
	std::cout<<r1.area()<<std::endl;
	std::cout<<r1.Calculation()<<std::endl;



	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0;
}
