#include<iostream>
using namespace std;
class Bank{
	int balance;
	public:
		Bank(){
			balance=0;
		}
		Bank(int amt){
			balance=amt;
		}
		void show(){
			cout<<"Balance="<<balance<<endl;
		}
};
int main(){
	Bank b1;
	Bank b2(5000);
	b1.show();
	cout<<endl;
	b2.show();
	return 0;
}
