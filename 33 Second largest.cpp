#include<iostream>
using namespace std;
int main()
{
	int a[5]={23,45,33,65,70},i;
	int largest=a[0],second=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>largest)
		{
			second=largest;
			largest=a[i];
		}
		else if(a[i]>second && a[i]!=largest)
		{
			second=a[i];
		}
	}
	cout<<"Second largest element is:"<<second<<" ";
	return 0;
}
