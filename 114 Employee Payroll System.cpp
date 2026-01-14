#include<iostream>
using namespace std;
class Employee{
	private:
		int empId;
		string name;
		float basic,hra,da,gross;
		public:
			void input(){
				cout<<"Enter employee id:";
				cin>>empId;
				cout<<"Enter name:";
				cin>>name;
				cout<<"Enter basic salary:";
				cin>>basic;
			}
			void calculate(){
				hra=0.2*basic;
				da=0.1*basic;
				gross=basic+hra+da;
			}
			void display(){
				cout<<"\nEmployee Id:"<<empId;
				cout<<"\nName:"<<name;
				cout<<"\nGross Salary:"<<gross<<endl;
			}
							
};
int main(){
	Employee e;
	e.input();
	e.calculate();
	e.display();
	return 0;
}
