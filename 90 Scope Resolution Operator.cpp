#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"Display A"<<endl;
			
		}
};
class B{
	public:
		void display(){
			cout<<"Display B"<<endl;
			
		}
};
class C:public A,public B{
};
int main(){
	C ob;
	ob.A::display();
	ob.B::display();
}
