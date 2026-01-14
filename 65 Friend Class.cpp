#include<iostream>
using namespace std;
class Book{
	int pages;
	public:
		Book(int p){pages=p;}
		friend class Library;
		
};
class Library{
	public:
		void showPage(Book b){
			cout<<"Pages in book:"<<b.pages<<endl;
		}
};
int main(){
	Book b1(250);
	Library lib;
	lib.showPages(b1);
	return 0;
}
