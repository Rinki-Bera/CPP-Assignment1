#include<iostream>
using namespace std;
class Bus{
	public:
		~Bus(){
			cout<<"Vehicle is a Bus"<<endl;
			
		}
};
class Vehicle:public Bus{
	public:
		~Vehicle(){
			cout<<"This is a vehicle"<<endl;
			
		}
};
int main(){
	Vehicle v;
}
