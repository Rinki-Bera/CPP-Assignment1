#include<iostream>
using namespace std;
class Student{
	private:
		int roll;
		string name;
		int m1,m2,m3;
		float total,avg;
		public:
			void input(){
				cout<<"Enter Roll No:";
				cin>>roll;
				cout<<"Enter name:";
				cin>>name;
				cout<<"Enter marks of three subjects:";
				cin>>m1>>m2>>m3;
			}
			void calculate(){
				total=m1+m2+m3;
				avg=total/3;
			}
			void display(){
				cout<<"\nRoll No:"<<roll;
				cout<<"\nName:"<<name;
				cout<<"\nTotal:"<<total;
				cout<<"\nAverage:"<<avg;
			}
};
int main(){
	Student s;
	s.input();
	s.calculate();
	s.display();
	return 0;
}
