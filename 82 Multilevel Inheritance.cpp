#include<iostream>
using namespace std;
class Vehicle{
	public:
		Vehicle(){
			cout<<"This is vehicle ";
			
		}
};
class FourWheeler:public Vehicle{
	public:
		FourWheeler(){
			cout<<" This vehicler is four wheeler";
		}
};
class Car:public FourWheeler{
	public:
		Car(){
			cout<<" This fourwheeler is car";
			
		}
};
int main(){
	Car ob;
}
