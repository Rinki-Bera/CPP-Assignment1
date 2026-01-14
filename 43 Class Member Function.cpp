#include<iostream>
using namespace std;
class Calculator
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
		int multiply(int a,int b)
		{
			return a*b;
		}
		int div(int a,int b)
		{
			return a/b;
		}
};
int main()
{
	Calculator c;
	cout<<"Sum="<<c.add(20,30)<<endl;
	cout<<"Subtraction="<<c.sub(20,30)<<endl;
	cout<<"Product="<<c.multiply(20,30)<<endl;
	cout<<"Division="<<c.div(20,30)<<endl;
	return 0;
}
