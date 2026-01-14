#include<iostream>
using namespace std;
int main()
{
	float si,p,r,t;
	cout<<"Enter the principal amount:";
	cin>>p;
	cout<<"Enter the annual interest rate(in %):";
	cin>>r;
	cout<<"Enter the time period(in year):";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"Simple Interest="<<si<<endl;
	return 0;
	
}
