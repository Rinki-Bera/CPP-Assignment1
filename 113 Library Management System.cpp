#include<iostream>
using namespace std;
class Library{
	private:
		int bookId;
		string bookName;
		int quantity;
		public:
			void input(){
				cout<<"Enter book id:";
				cin>>bookId;
				cout<<"Enter book name:";
				cin>>bookName;
				cout<<"Enter quantity:";
				cin>>quantity;
			} 
			void issueBook(){
				if(quantity>0){
					quantity--;
					cout<<"Book issued successfully\n";
				}else{
					cout<<"Book not available\n";
				}
			}
			void display(){
				cout<<"\n Book ID:"<<bookId;
				cout<<"\nBook Name:"<<bookName;
				cout<<"\nAvailable quantity:"<<quantity;
			}
};
int main(){
	Library l;
	l.input();
	l.issueBook();
	l.display();
	return 0;
}
