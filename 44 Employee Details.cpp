#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		string name;
		float salary;
		public:
			void input()
			{
				cout<<"Enter ID,Name & Salary:";
				cin>>id>>name>>salary;
			}
			void display()
			{
				cout<<"Name:"<<name<<"\n"<<"ID:"<<id<<"\n"<<"Salary:"<<salary<<endl;
			}
};
int main()
{
	Employee e1,e2;
	e1.input();
	e2.input();
	e1.display();
	e2.display();
	return 0;
}
