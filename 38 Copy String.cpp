#include<iostream>
using namespace std;
int main()
{
	char a[100],b[100];
	int i=0;
	cout<<"Enter a string:";
	cin.getline(a,100);
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	cout<<"Copied string:"<<b;
	return 0;
}
