#include<iostream>
using namespace std;
class Calculator{
	public:
		int add(int a, int b){
			return a+b;
			
		}
		float add(float a, float b){
			return a+b;
		}
};
int main(){
	Calculator c;
	cout<<"Addition of two integers"<< c.add(10,20)<<endl;
	cout<<"Addition of two floats"<< c.add(3.0f,4.2f)<<endl;
}
