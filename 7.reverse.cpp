#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"entre 5 no to reverse them"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"value"<<i+1<<":"<<"\t";
		cin>>arr[i];
			}
			cout<<"reverse no are";
			for(i=4;i>-1;i--)
			{
				cout<<arr[i];
			}
			return 0;
}
