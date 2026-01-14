#include<iostream>
using namespace std;
class Person{
	const int birthYear;
	public:
		Person(int y):birthYear(y){
			cout<<"Birth year stored:"<<birthYear<<endl;
		}
};
int main(){
	int n,year;
	cout<<"Enter number of persons:";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Enter birth year of person"<<i<<":";
		cin>>year;
		Person p(year);
	}
	return 0;
}
