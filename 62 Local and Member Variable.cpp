#include<iostream>
using namespace std;
class Employee{
	int salary;
	public:
		void setSalary(int salary){
			this->salary=salary;
		}
		void showSalary(){
			cout<<"Salary:"<<this->salary<<endl;
		}
};
int main(){
	Employee e1,e2;
	e1.setSalary(30000);
	e2.setSalary(50000);
	e1.showSalary();
	e2.showSalary();
	return 0;
}

