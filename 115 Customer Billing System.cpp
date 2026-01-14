#include<iostream>
using namespace std;
class Billing{
	private:
		int custId;
		string name;
		int qty;
		float price,total;
		public:
			void input(){
				cout<<"Enter customer ID:";
				cin>>custId;
				cout<<"Enter name:";
				cin>>name;
				cout<<"Enter quantity:";
				cin>>qty;
				cout<<"Enter price per item:";
				cin>>price;
			}
			void calculate(){
				total=qty*price;
			}
			void display(){
				cout<<"\nCustomer ID:"<<custId;
				cout<<"\nName:"<<name;
				cout<<"\nTotal bill:"<<total<<endl;
			}
};
int main(){
	Billing b;
	b.input();
	b.calculate();
	b.display();
	return 0;
}
