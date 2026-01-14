#include<iostream>
using namespace std;
int main()
{
	float a,r,pi=3.14;
	cout<<"Enter the radius of the circle:";
	cin>>r;
	a=pi*r*r;
	cout<<"Area of circle="<<a<<endl;
	float l,b,A;
	cout<<"Enter the length and width of the rectangle:";
	cin>>l>>b;
	A=l*b;
	cout<<"Area of rectangle="<<A<<endl;
	float base,h,ar;
	cout<<"Enter the base and height of the triangle:";
	cin>>base>>h;
	ar=(base*h)/2;
	cout<<"Area of triangle="<<ar<<endl;
	return 0;
}
