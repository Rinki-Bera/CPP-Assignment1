#include<iostream>
using namespace std;
class Person{
	protected:
		int age;
		public:
			void setAge(int a){
				age=a;
			}
};
class Student:protected Person{
	public:
		void showAge(){
			cout<<"Age is "<<age<<endl;
			
		}
		void inputAge(int a){
			setAge(a);
		}
};
int main(){
	Student s;
	s.inputAge(20);
	s.showAge();
}
