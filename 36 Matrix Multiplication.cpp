#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],p[3][3],i,j,k,sum;
	cout<<"Enter first matrix:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter second matrix:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				p[i][j]=sum;
			}
		}
	}
	cout<<"Product of two matrix:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
