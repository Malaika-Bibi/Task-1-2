#include<iostream>
using namespace std;
int main()
{
	int n,i;
	long f;
	cout<<"entre number to print its factorial"<<endl;
	cin>>n;
	f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	cout<<"factorial of number is "<<f<<endl;
	return 0;
}
