
#include <iostream>
using namespace std;



template <class X>
class ArrayList
{
private:
	struct ControlBlock
	{
		int capacity;
		X *arr_ptr;
	};
	ControlBlock *s;

public :

ArrayList(int capacity)
{
	s=new ControlBlock;
	s->capacity=capacity;
	s->arr_ptr=new X(s->capacity);
}

void AddElement(int index,X data)
{
	if(index>=0 && index<=s->capacity-1)
	{
		s->arr_ptr[index]=data;
	}
	else
	{
		cout<<"\n Array index is not valid"<<endl;
	}
}

void viewElement(int index, X &data)
{
	if(index>=0 && index<=s->capacity-1)
	{
		data=s->arr_ptr[index];
	}
	else
	{
		cout<<"\n Array index is not valid"<<endl;
	}
}



void viewList()
{
	int i ;
	for(i=0;i<=s->capacity-1;i++)
	{
		cout<<" "<< s->arr_ptr[i];
	}
}
};




int main() {

ArrayList <float>list1(4);
list1.AddElement(0,5.6);
list1.AddElement(1,9.8);
list1.AddElement(2,560);
list1.AddElement(3,76);

list1.viewList();

	return 0;
}
