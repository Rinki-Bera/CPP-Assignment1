 #include<iostream>
 using namespace std;
 class A{
 	public:
 		void show(){
 			cout<<"This is A"<<endl;
		 }
 };
 class B:private A{
 	public:
 		void display(){
 			show();
		 }
 };
 int main(){
 	B ob;
 	ob.display();
 }
