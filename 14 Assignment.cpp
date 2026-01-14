#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value:";
	cin>>a;
	cout<<"Initial value of a="<<a<<endl;
	a+=5;
	cout<<"After a+=5,the value of a="<<a<<endl;
	a-=4;
	cout<<"After a-=4,the value of a="<<a<<endl;
	a*=7;
	cout<<"After a*=7,the value of a="<<a<<endl;
	a/=4;
	cout<<"After a/=4,the value of a="<<a<<endl;
	a%=2;
	cout<<"After a%=2,the value of a="<<a<<endl;
	return 0;
}
