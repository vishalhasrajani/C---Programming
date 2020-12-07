

#include <iostream>
using namespace std;
#include<array>

int main() {

	array <int,5> data_arr1={1,6,9,5,4}; //array 1
	array <int,5> data_arr2={11,66,99,55,44}; // array 2
	cout << "\n "<<data_arr1.at(2); //value at location 2
	cout << "\n "<< data_arr1[3]; //value at location 3
	cout << "\n "<< data_arr1.front(); // 1st element
	cout << "\n "<< data_arr1.back(); //last element
	cout<< "\n" << "Size is " << data_arr1.size(); //returns the size

	data_arr2.swap(data_arr1); //swap 2 array but the size of array should be same
	for(int i=0; i<=4;i++)
	{
		cout <<data_arr1[i];
	}
	cout<<endl;
	for(int i=0; i<=4;i++)
		cout<<data_arr2[i];

	data_arr1.fill(5); //fills each element in array with  5.
	for(int i=0;i<=4;i++)
	{
		cout<<"\n "<< data_arr1[i];
	}
	return 0;

}
