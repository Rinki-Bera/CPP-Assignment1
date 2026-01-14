#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void area()=0;
};
class Rectangle:public Shape{
	int length ,breadth;
	public:
		void area(){
			cout<<"Enter length and breadth:";
			cin>>length>>breadth;
			cout<<"Area of Rectangle="<<length*breadth<<endl;
			
		}
};
int main(){
	Shape *s;
	Rectangle r;
	s=&r;
	s->area();
	return 0;
	
}
