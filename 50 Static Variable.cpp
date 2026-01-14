#include<iostream>
using namespace std;
class Count{
	private:
		static int count;
		public:
			Count(){
				count++;
			} 
			static void showCount(){
				cout<<"Total number of objects created:"<<count<<endl;
			}
};
int Count::count=0;
int main(){
	cout<<"Creating first object..."<<endl;
	Count obj1;
	cout<<"Creating second object..."<<endl;
	Count obj2;
	cout<<"Creating third object..."<<endl;
	Count obj3;
	Count::showCount();
	return 0;
}
