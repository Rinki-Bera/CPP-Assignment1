#include<iostream>
using namespace std;
class Vehicle{
	public:
		Vehicle(){
			cout<<"this is vehicle";
			
		}
};
class Car:public Vehicle{
	public:
		Car(){
			cout<<" this Vehicle is car";
			
		}
};
int main(){
   Car ob;
}
