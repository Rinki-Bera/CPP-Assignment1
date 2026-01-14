#include<iostream>
using namespace std;
class Test{
	static int x;
	public:
		static void show(){
			cout<<x;
		}
};
int Test::x=50;
int main(){
	Test::show();
	return 0;
}
