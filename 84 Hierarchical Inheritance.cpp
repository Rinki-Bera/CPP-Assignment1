#include<iostream>
using namespace std;
class Vehicle{
	public:
		Vehicle(){
			cout<<"this is vehicle";
			
		}
};
class Bus:public Vehicle{
	public:
		Bus(){
			cout<<" This vehicle is Bus"<<endl;
		}
};
class Car:public Vehicle{
	public:
		Car(){
			cout<<" This vehicle is car"<<endl;
		}
	
};
int main(){
	Bus ob;
	Car ob1;
}
