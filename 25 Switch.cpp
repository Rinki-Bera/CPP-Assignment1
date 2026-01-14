#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter any alphabet(Aa-Zz):";
	cin>>c;
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		cout<<" It is a vowel."<<endl;
		break;
		default:
		cout<<"It is a consonant."<<endl;
	}
	return 0;
	
}
