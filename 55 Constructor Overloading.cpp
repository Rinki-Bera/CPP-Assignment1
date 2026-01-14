#include<iostream>
using namespace std;
class Employee{
	int salary;
	public:
		Employee(){
			salary=0;
			cout<<"Default Constructor Called."<<endl;
		}
		Employee(int s){
			salary=s;
			cout<<"Parameterized Constructor Called."<<endl;
		}
		void show(){
			cout<<"Salary="<<salary<<endl;
		}
};
int main(){
	Employee e1;
	e1.show();
	Employee e2(30000);
	e2.show();
	return 0;
}
