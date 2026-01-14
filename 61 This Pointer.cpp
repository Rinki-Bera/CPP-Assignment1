#include<iostream>
using namespace std;
class Student{
	int marks;
	public:
		void setMarks(int marks){
			this->marks=marks;
		}
		void showMarks(){
			cout<<"Marks:"<<this->marks<<endl;
		}
};
int main(){
	Student s1,s2;
	s1.setMarks(86);
	s2.setMarks(78);
	s1.showMarks();
	s2.showMarks();
	return 0;
}
