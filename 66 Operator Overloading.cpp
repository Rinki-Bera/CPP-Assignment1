#include<iostream>
using namespace std;
class Number{
	int x;
	public:
		void get(){
			cin>>x;
		}
		friend Number operator +(Number,Number);
		void show(){
			cout<<x;
		}
};
Number operator +(Number a,Number b){
	Number c;
	c.x=a.x + b.x;
	return c;
}
int main(){
	Number a,b,c;
	cout<<"Enter two numbers:";
	a.get();
	b.get();
	c=a+b;
	cout<<"Sum=";
	c.show();
	return 0;
}
