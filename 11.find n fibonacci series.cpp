#include<iostream>
using namespace std;
int main()
{
	int a,b,c,n,count;
	cout<<"how many fibonacci term you required"<<endl;
	cin>>n;
	a=0;
	b=1;
	cout<<"fiboconi terms are"<<endl;
	cout<<a<<"\t"<<b;
	count=2;
	while(count<n)
	{
		c=a+b;
		cout<<c<<"\t";
		count++;
		a=b;
		b=c;
			}
			return 0;
}
