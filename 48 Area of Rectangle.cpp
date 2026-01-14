#include<iostream>
using namespace std;
class Rectangle{
	public:
		int l,b;
		void input(){
			cout<<"Enter length and breadth:";
			cin>>l>>b;
		}
		void area(){
			cout<<"Area of rectangle is:"<<l*b;
		}
};
int main()
{
	Rectangle r;
	r.input();
	r.area();
	return 0;
}
