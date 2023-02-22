#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"entre no to swap\n";
	cout<<"entre 1st number:";
	cin>>a;
	cout<<"entre 2nd number:";
	cin>>b;
	cout<<"entre 3rd number:";
	cin>>temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<b;
	return 0;
}
