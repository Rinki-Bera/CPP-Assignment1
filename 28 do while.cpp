#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter the term:";
	cin>>n;
	do{
		cout<<i<<" ";
		i+=2;
	}
	while(i<=n);
	return 0;
}
