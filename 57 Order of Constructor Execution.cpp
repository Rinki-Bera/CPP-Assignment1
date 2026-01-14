#include<iostream>
using namespace std;
class Foundation{
	public:
		Foundation(){
			cout<<"Foundation built first"<<endl;
		}
}; 
class House:public Foundation{
	public:
		House(){
			cout<<"House constructed after foundation"<<endl;
		}
};
int main(){
	House h;
	return 0;
}
