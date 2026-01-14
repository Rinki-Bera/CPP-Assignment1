#include<iostream>
using namespace std;
class BankAccount{
	int balance;
	public:
		BankAccount(int b){
			balance=b;
			cout<<"Account created with balance:"<<balance<<endl;
		}
		~BankAccount(){
			cout<<"Account object destroyed,balance cleared."<<endl;
		}
};
int main(){
	BankAccount acc1(500);
	BankAccount acc2(1000);
	return 0;
}
