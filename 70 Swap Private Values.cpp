#include<iostream>
using namespace std;
class Swap{
	int x;
	public:
		void get(){cin>>x;}
		friend void swap(Swap &,Swap &);
		void show(){cout<<x<<" ";}
		
};
void swap(Swap &a,Swap &b){
	int t=a.x;
	a.x=b.x;
	b.x=t;
}
int main(){
	Swap a,b;
	cout<<"Enter two numbers:";
	a.get();
	b.get();
	swap(a,b);
	cout<<"After swap:";
	a.show();
	b.show();
	return 0;
}
