#include<iostream>
using namespace std;
int main()
{
	int a[5]={45,32,9,87,66},i,largest=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
	}
	cout<<"Largest element is:"<<largest;
	return 0;
	
}
