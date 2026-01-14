#include<iostream>
using namespace std;
class WaterVehicle{
	public:
		WaterVehicle(){
			cout <<" It is water vehicle"<<endl;
			
		}
};
class LandVehicle{
	public:
		LandVehicle(){
			cout<<" Water vehicle is a land vehicle"<<endl;
			
		}
};
class AmphibiousVehicle:public WaterVehicle, public LandVehicle{
	public:
		AmphibiousVehicle(){
			cout<<" This is amphibious vehicle "<<endl;
		}
};
int main(){
	AmphibiousVehicle ob;
}
