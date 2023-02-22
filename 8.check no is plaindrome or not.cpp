#include<iostream>
using namespace std;
int main()
{
	int num,reverse=0,rem,temp;
	cout<<"entre no"<<endl;
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		reverse=reverse*10+rem;
		temp/=10;
	};
	if(num==reverse)
	cout<<"plaindrome"<<endl;
	else
	cout<<"not plaindrome"<<endl;

return 0;
}
