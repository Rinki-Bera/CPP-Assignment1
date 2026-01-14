#include<iostream>
using namespace std;
class Sample{
	int x;
	public:
		Sample(int a){x=a;}
		void show()const{
		cout<<x;
		}
};
int main(){
	Sample s(10);
	s.show();
	return 0;
}
