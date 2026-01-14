#include<iostream>
using namespace std;
struct Student
{
int roll;
char name[50];
float marks;
};
int main()
{
	Student s;
	cout<<"Enter Roll Number:";
	cin>>s.roll;
	cout<<"Enter Name:";
    cin>>s.name;
	cout<<"Enter Marks:";
	cin>>s.marks;
	cout<<"\n Student Details\n";
	cout<<"Name:"<<s.name<<endl;
	cout<<"Roll Number:"<<s.roll<<endl;
	cout<<"Marks:"<<s.marks<<endl;
	return 0;
}

