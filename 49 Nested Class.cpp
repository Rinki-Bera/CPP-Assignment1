#include<iostream>
using namespace std;
class School{
	public:
		class Student{
			public:
				void showStudent(){
					cout<<"Students belong to the school"<<endl;
				}
		};
		void showSchool(){
			cout<<"This is a school"<<endl;
		}
};
int main(){
	School s;
	s.showSchool();
	School::Student s1;
	s1.showStudent();
	return 0;
}
