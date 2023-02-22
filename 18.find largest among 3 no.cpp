#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"entre  3 number to find largest between them \n";
	cout<<"entre 1st number:";
	cin>>a;
	cout<<"entre 2nd number:";
	cin>>b;
	cout<<"entre 3rd number:";
	cin>>c;
	if(a>b&&a>c)
	cout<<a;
	else if(b>a&&b>c)
	cout<<b;
	else 
	cout<<c;
	return 0;
}
