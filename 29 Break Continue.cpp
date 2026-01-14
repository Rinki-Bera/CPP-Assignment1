#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i==12){
			break;
		}
		if(i%2!=0){
			continue;
		}
		cout<<i<<" ";
	}
	return 0;
}
