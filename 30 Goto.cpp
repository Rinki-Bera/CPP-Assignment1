#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter a number:";
	cin>>n;
	start:
		if(n>0){
			sum=sum+n;
			n--;
			goto start;
		}
		cout<<"Sum="<<sum;
		return 0;
	
}
