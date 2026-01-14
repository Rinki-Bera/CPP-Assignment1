#include<iostream>
using namespace std;
class Demo{
	public:
		void show()const{
		cout<<"Constant Object";
		}
};
int main(){
	const Demo d;
	d.show();
	return 0;
	}
