#include<iostream>
using namespace std;
class Largest{
	public:
		int a,b;
		void input(){
			cout<<"Enter two numbers:";
			cin>>a>>b;
		}
		void find(){
			if(a>b)
			cout<<a<<"is largest number."<<endl;
			else
			cout<<b<<"is largest number."<<endl;
		}
};
int main()
{
	Largest I;
	I.input();
	I.find();
	return 0;
}
