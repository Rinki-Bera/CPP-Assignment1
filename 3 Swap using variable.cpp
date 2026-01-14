#include<iostream>
using namespace std;
int main()
{
	int a=10,b=8,c;
	cout<<"The value of a and b:"<<a<<" "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"After swapping the value of a and b:"<<a<<" "<<b<<endl;
	return 0;
}
