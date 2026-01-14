#include<iostream>
using namespace std;
class Demo{
	public:
		void show(){
			cout<<"Dynamic Object";
		}
};
int main(){
	Demo*d=new Demo();
	d->show();
	delete d;
	return 0;
}
