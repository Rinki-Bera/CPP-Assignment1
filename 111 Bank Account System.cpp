#include<iostream>
using namespace std;
class BankAccount{
	private:
		int accNo;
		string name;
		float balance;
		public:
			void input(){
				cout<<"Enter account number:";
				cin>>accNo;
				cout<<"Enter name:";
				cin>>name;
				cout<<"Enter initial balance:";
				cin>>balance;
			}
			void deposit(){
				float amt;
				cout<<"Enter ammount to deposit:";
				cin>>amt;
				balance+=amt;
			}
			void withdraw(){
				float amt;
				cout<<"Enter ammount to withdraw:";
				cin>>amt;
				if(amt<=balance)
				balance-=amt;
				else
				cout<<"Insufficient balance\n";
			}
			
			void display(){
				cout<<"\nAccount No:"<<accNo;
				cout<<"\nName:"<<name;
				cout<<"\nBalance:"<<balance<<endl;
			}
};
int main(){
	BankAccount b;
	b.input();
	b.deposit();
	b.withdraw();
	b.display();
	return 0;
}
