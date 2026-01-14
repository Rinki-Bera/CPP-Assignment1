#include<iostream>
using namespace std;
class HotelRoom{
	int *roomNo;
	public:
		HotelRoom(int r){
			roomNo=new int;
			*roomNo=r;
			cout<<"Room booked:"<<*roomNo<<endl;
		}
		~HotelRoom(){
			cout<<"Room released:"<<*roomNo<<endl;
			delete roomNo;
		}
};
int main(){
	HotelRoom g1(100);
	HotelRoom g2(90);
	HotelRoom g3(104);
	return 0;
}
