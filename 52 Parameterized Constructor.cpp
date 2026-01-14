#include<iostream>
using namespace std;
class Student{
	int roll;
	public:
		Student(int r){
			roll=r;
		}
		void show(){
			cout<<"Roll Number="<<roll<<endl;
		}
};
int main(){
	Student s1(10);
	Student s2(5);
	s1.show();
	cout<<endl;
	s2.show();
	return 0;
}
