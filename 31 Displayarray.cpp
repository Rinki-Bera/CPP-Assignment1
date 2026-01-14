#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	cout<<"Enter array elements:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Array elements are:";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
