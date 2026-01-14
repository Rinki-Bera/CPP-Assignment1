#include<iostream>
using namespace std;
class Number{
	private:
		int value;
		public:
			void getData(int v){
				value=v;
				
			}
			Number operator +(Number obj){
				Number temp;
				temp.value=value+obj.value;
				return temp;
			}
		void display(){
			cout<<"Result="<<value<<endl;
		}
};
int main(){
	Number n1,n2,n3;
	n1.getData(10);
	n2.getData(20);
	n3=n1+n2;
	n3.display();
	}
