#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle(){
		
		cout <<"This is vehicle"<<endl;
	}
	
};
class Car:public vehicle{

	public:
		Car(){
		
		cout<<"Car is a vehicle"<<endl;
	}
};
class Fare{
	public:
		Fare(){
			cout<<"This vehicle is fare"<<endl;
			
		}
};
class Bus:public vehicle,public Fare{
	public:
		Bus(){
			cout<<"This is bus"<<endl;
		}
};
int main(){
	Car ob;
	Fare ob2;
	Bus ob1;
}
