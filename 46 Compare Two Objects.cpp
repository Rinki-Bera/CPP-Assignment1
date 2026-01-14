#include<iostream>
using namespace std;
class Compare{
	public:
		int x;
};
int main()
{
	Compare a,b;
	a.x=10;
	b.x=20;
	if(a.x>b.x)
	cout<<"Object"<<" "<<a.x<<" "<<"is greater."<<endl;
	else
	cout<<"Object"<<" "<<b.x<<" "<<"is greater."<<endl;
	return 0;
}
