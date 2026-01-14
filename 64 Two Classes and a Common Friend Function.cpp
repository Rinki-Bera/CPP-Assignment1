#include<iostream>
using namespace std;
class Account1;
class Account2;
class Transfer{
	public:
		void showTotal(Account1 a1,Account2 a2);
		
};
class Account1{
	int balance1;
	public:
		Account1(int b){balance1=b;}
		friend void Transfer::showTotal(Account1,Account2);
};
class Account2{
	int balance2;
	public:
		Account2(int b){balance2=b;}
		friend void Transfer::showTotal(Account1,Account2);
};
void Transfer::showTotal(Account1 a1,Account2 a2){
	cout<<"Total Balance:"<<(a1.balance1+a2.balance2)<<endl;
} 
int main(){
	Account1 a1(5000);
	Account2 a2(10000);
	Transfer t;
	t.showTotal(a1,a2);
	return 0;
}
