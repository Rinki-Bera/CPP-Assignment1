#include<iostream>
using namespace std;
int main()
{
	int a=20,*p;
	p=&a;
	cout<<"Value of a is:"<<a<<endl;
	cout<<"Address of a is:"<<&a<<endl;
	cout<<"Value of p is:"<<p<<endl;
	cout<<"Value pointed by p is:"<<*p<<endl;
	return 0;
}
