#include<iostream>
using namespace std;
class Bank{
	int balance;
	public:
		Bank(int b){balance=b;}
		friend void showBalance(Bank b);
		
};
void showBalance(Bank b){
	cout<<"Balance:"<<b.balance<<endl;
}
int main(){
	Bank b1(5000);
	showBalance(b1);
	return 0;
}
