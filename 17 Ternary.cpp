#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks:";
	cin>>marks;
	string result=(marks>=40)?"PASS":"FAIL";
	cout<<"You are"<<" "<<result<<endl;
	return 0;
}
