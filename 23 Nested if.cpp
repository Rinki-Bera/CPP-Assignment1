#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		cout<<a<<" "<<"is largest number."<<endl;
		else
		cout<<c<<" "<<"is largest number."<<endl;
	}
	else
	{
		if(b>c)
		cout<<b<<" "<<"is largest number."<<endl;
		else
		cout<<c<<" "<<" is largest number."<<endl;
	}
	return 0;
}
