#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two values:";
	cin>>a>>b;
	cout<<a<<"&"<<b<<"="<<(a&b)<<endl;
	cout<<a<<"|"<<b<<"="<<(a|b)<<endl;
	cout<<a<<"^"<<b<<"="<<(a^b)<<endl;
	cout<<"~"<<a<<"="<<(~a)<<endl;
	cout<<a<<"<<2="<<(a<<2)<<endl;
	cout<<b<<">>1="<<(b>>1)<<endl;
	return 0;
	}
