#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	if(n>0)
	cout<<n<<" "<<"is positive number."<<endl;
	else if(n<0)
	cout<<n<<" "<<"is negative number."<<endl;
	else
	cout<<"The value is zero."<<endl;
	return 0;
}
