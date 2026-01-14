#include<iostream>
using namespace std;
class Test{
	private:
		int marks;
		public:
			void setMarks(int a)
			{
				marks=a;
			}
			void showMarks()
			{
				cout<<"Marks:"<<marks<<endl;
			}
};
int main()
{
	Test t;
	t.setMarks(95);
	t.showMarks();
	return 0;
}
