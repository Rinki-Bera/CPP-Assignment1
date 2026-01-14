#include<iostream>
using namespace std;
int main()
{
	int a,b,c,result;
	cout<<"The algebraic expression is:[(a+b)*(a-b)]+c"<<endl;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;
	result=((a+b)*(a-b))+c;
	cout<<"[("<<a<<"+"<<b<<")*("<<a<<"-"<<b<<")]+"<<c<<"="<<result<<endl;
	return 0;
}
