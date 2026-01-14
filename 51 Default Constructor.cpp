#include<iostream>
using namespace std;
class Student{
	int roll;
	public:
		Student(){
			roll=2;
		}
		void show(){
			cout<<"Roll Number="<<roll<<endl;
		}
};
int main(){
	Student s;
	s.show();
	return 0;
}
