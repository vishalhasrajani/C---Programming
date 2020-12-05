

#include <iostream>




class Student
{
private:
	int roll;
	std::string name;
	int phymarks;
	int scimarks;
	int chemmarks;

public:
	Student(int r,std::string n,int p,int s,int c)
	{
		roll=r;
		name=n;
		phymarks=p;
		scimarks=s;
		chemmarks=c;
	}

int total()
{
	return (phymarks+scimarks+chemmarks);
}

char grade()
{
	float average=total()/3;

	if(average>80)
	{
		return 'A';
	}
	else if(average>40 && average<80)
	{
		return 'B';
	}
	else
	{
		return 'C';
	}
}



};
int main() {

	int roll_num;
	std::string na;
	int p_marks;
	int s_marks;
	int c_marks;

	std::cout << "Enter your name :"<<std::endl;
	std::cin >> na;
	std::cout << "Enter your Roll number:"<<std::endl;
	std::cin >> roll_num;
	std::cout << "Enter your Physics marks :"<<std::endl;
	std::cin >> p_marks;
	std::cout << "Enter your science marks :"<<std::endl;
	std::cin >> s_marks;
	std::cout << "Enter your Chemistry marks :"<<std::endl;
	std::cin>>c_marks;

	Student s(roll_num,na,p_marks,s_marks,c_marks);

	std::cout << "Your Total is : "<< s.total()<<std::endl;
	std::cout << "Your Grade is : "<< s.grade()<<std::endl;
	return 0;
}
