
#include <iostream>
using namespace std;
#include<vector>

int main() {
	vector <int>v;
	cout << "Current Capcity is: "<<v.capacity()<<endl;// at starting it will be zero.
	for(int i=0;i<10;i++)
	{
		v.push_back(10*(i+1)); //adds the elements in vector
	}
	cout << " Capcity is: "<<v.capacity()<<endl;

	v.pop_back(); //deletes last one element
	cout << " Capcity is: "<<v.capacity()<<endl;

	v.pop_back();
	cout << " Capcity is: "<<v.capacity()<<endl;

	v.pop_back();
	cout << " Capcity is: "<<v.capacity()<<endl;

	cout <<"Total number of elemets are: "<<v.size()<<endl; //size of vector

	for(int i=0;i<v.size();i++)
	{
		cout<< v[i];  //printing values
	}

	vector <int> :: iterator it=v.begin(); //using iterator as pointer
	v.insert(it,65); //insert at beginning
	v.insert(it+3,35);
	cout << v.at(2)<<endl; // at particular position prints the value

	for(int i=0;i<v.size();i++)
		{
			cout<< v[i];  // printing values
		}

	cout<<"\n First value is:"<<v.front()<<endl;
	cout<<"\n Last value is:"<<v.back()<<endl;

	v.clear(); //clear all values

	cout <<"Total number of elemets are: "<<v.size()<<endl; //size of vector
	cout << " Capcity is: "<<v.capacity()<<endl;



	/*v.push_back(10);
	cout << "Current Capcity is: "<<v.capacity()<<endl; //capacity 1
	v.push_back(20);
	cout << "Current Capcity is: "<<v.capacity()<<endl; //capacity 2
	v.push_back(30);
	cout << "Current Capcity is: "<<v.capacity()<<endl; // capacity 4



	vector <int> v1{6,8,3};
	vector <char> v2(4); //4 elements vector.
	vector <int> v3(5,15); // 5 elements vector with 15 value in each element.
	vector <string> v4(2,"vish");
	for(int i=0;i<2;i++)
	cout<<v1[i]<<endl;
	cout << v4[0]<<endl;


*/


	return 0;
}
