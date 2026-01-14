#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
		void input()
		{
			cout<<"Enter ID and Name:";
			cin>>id>>name;
		}
		void display()
		{
		cout<<"ID:"<<id<<"\n"<<"Name:"<<name<<endl;
	}
	 
};
int main()
{
	Student s1,s2;
	s1.input();
	s2.input();
	s1.display();
	s2.display();
	return 0;
}
