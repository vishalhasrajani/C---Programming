

#include <iostream>
using namespace std;

class student
{
private:
	string name;
	int age;
public :
	void setStudent(string n,int a)
	{
		name=n;age=a;
	}

	void showStudent()
	{
		cout<<"\nName: "<< name;
		cout<<"\nAge: " << age;
	}
};

int main() {

pair <string,int>p1;
pair <string,string>p2;
pair <string,float>p3;
pair <int,student>p4;
student s1;
s1.setStudent("Takis", 45);

p1=make_pair("Vishal",16);
p2=make_pair("India","Canada");
p3=make_pair(" Accelerated C++",45.69f);
p4=make_pair(1,s1);

cout <<"\n"<<p1.first << " "<<p1.second;
cout <<"\n"<<p2.first << " "<<p2.second;
cout<<"\n" <<p3.first << " "<<p3.second;
cout<<"\n" <<p4.first << " ";
student s2 =(p4.second);
s2.showStudent();

	return 0;
}
