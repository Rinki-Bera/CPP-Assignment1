#include<iostream>
using namespace std;
int main()
{
	int a=10,b=8;
	cout<<"The value of a and b:"<<a<<" "<<b<<endl;
	a=a-b;
	b=a+b;
	a=b-a;
	cout<<"After swapping the value of a and b:"<<a<<" "<<b<<endl;
	return 0;
}
