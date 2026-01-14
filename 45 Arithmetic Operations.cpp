#include<iostream>
using namespace std;
class Arithmetic{
	private:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter two numbers:";
				cin>>a>>b;
			}
			void add()
			{
				cout<<"Sum="<<a+b<<endl;
			}
			void sub()
			{
				cout<<"Difference="<<a-b<<endl;
			}
			void mul()
			{
				cout<<"Product="<<a*b<<endl;
			}
			void div()
			{
				if(b!=0)
				cout<<"Quotient="<<a/b<<endl;
				else
				cout<<"Cannot divide by zero"<<endl;
			}
};
int main()
{
	Arithmetic cal;
	cal.input();
	cal.add();
	cal.sub();
	cal.mul();
	cal.div();
	return 0;
}
