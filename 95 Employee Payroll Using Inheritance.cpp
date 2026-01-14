#include<iostream>
using namespace std;
class Employee{
	protected:
	int empid;
	char name[30];
	public:
		void getEmployee(){
			cout<<"Enter Employee ID";
			cin>> empid;
			cout<<"Enter Employee name";
			cin>>name;
			
		}
		void showEmployee(){
			cout<<"Employee ID"<<empid<<endl;
			cout<<"Employee Name"<<name<<endl;
			
		}
};
class Payroll:public Employee{
	private:
		 float basic, har, da,gross;
		 public:
		 	void getsalary(){
		 		cout<<"Enter Basic Salary";
		 		cin>>basic;
		 		har=0.20*basic;
		 		da=0.10*basic;
		 		gross=basic+har+da;
		 		
			 }
			 void showPayroll(){
			 	showEmployee();
			 	cout<<"Basic Salary"<<basic<<endl;
			 	cout<<"HAR"<<har<<endl;
			 	cout<<"DA"<< da<<endl;
			 	cout<<"Gross Salary"<<gross<<endl;
			 }
};
int main(){
	Payroll p;
	p.getEmployee();
	p.getsalary();
	p.showPayroll();
}
