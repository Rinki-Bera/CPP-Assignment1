#include<iostream>
using namespace std;
class Student{
	protected:
		int rollNO;
		char Name[30];
		
		public: void getStudent(){
			cout<<"Enter the roll no.";
			cin>>rollNO;
			cout<<"Enter the name";
			cin>>Name;
		}
		void showStudent(){
			cout<<"Roll no."<<rollNO<<endl;
			cout<<"Name"<<Name<<endl;
		}
};
class Marks:public Student{
	protected:
		int m1,m2,m3;
		public:
			void getMarks(){
				cout<<"Enter marks of 3 subject";
				cin>>m1>>m2>>m3;
				
			}
};
class Result:public Marks{
	public:
		void showResult(){
			int total=m1+m2+m3;
			float avg=total/3;
			
			showStudent();
			cout<<"Total Marks"<<total<<endl;
			cout<<"Average"<<avg<<endl;
			
			if(avg>=40)
			cout<<"Result : PASS"<<endl;
			else
			cout<<"Result : FAIL"<<endl;
			
		}
};
int main(){
	Result r;
	r.getStudent();
	r.getMarks();
	r.showResult();
}
