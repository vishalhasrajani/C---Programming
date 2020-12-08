

#include <iostream>
using namespace std;
#include<map>

int main() {

	map <int,string> customer; //map of customer with 100 as a key and vishal as a value.

	customer[100]="Vishal";
	customer[123]="Parth";
	customer[145]="Vaibhav";
	customer[171]="Goutham";
	customer[200]="jatin";

	customer.insert(pair<int,string>(205,"lala")); //inserting the pairs

	/*map<int,string> c{
		{100,"v"},{200,"f"}
	};
	*/
	cout<<customer[100]; //printing the value at 100
	map <int,string>:: iterator it=customer.begin(); // using iterator to print the values
	while(it!=customer.end())
	{
		cout<<"\n"<<it->first<<" "<< it->second<<endl;
		it++;
	}

	cout <<customer.at(123); //at function
	cout<<customer.size(); //size() returns the size of map.



	return 0;
}
