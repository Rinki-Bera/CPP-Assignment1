#include<iostream>
using namespace std;
class Student{
	public:
	static int totalStudents;
	public:
		Student(){
			totalStudents++;
			cout<<"Student admitted.\nTotal students="<<totalStudents<<endl;
		}
};
int Student::totalStudents=0;
int main(){
	int n;
	cout<<"Enter number of students:";
	cin>>n;
	for(int i=1;i<=n;i++){
		Student s;
		
	}
	cout<<"Final total students="<<Student::totalStudents<<endl;
	return 0;
}
