#include<iostream>
using namespace std;
class Data{
	private:
		int x;
		public:
			void set(int a){x=a;}
			int get(){return x;}
			
};
int main(){
	Data d;
	d.set(10);
	cout<<d.get();
	return 0;
}
