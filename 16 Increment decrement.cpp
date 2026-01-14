#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value:";
	cin>>a;
	cout<<"Initial value of a="<<a<<endl;
	cout<<"Post increment(a++)="<<a++<<endl;
	cout<<"After a++,the value of a="<<a<<endl;
	cout<<"Pre increment(++a)="<<++a<<endl;
	cout<<"After ++a,the value of a="<<a<<endl;
	cout<<"Post decrement(a--)="<<a--<<endl;
	cout<<"After a--,the value of a="<<a<<endl;
	cout<<"Pre decrement(--a)="<<--a<<endl;
	cout<<"After --a,the value of a="<<a<<endl;
	return 0;
}
