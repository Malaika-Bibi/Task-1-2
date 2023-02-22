#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;

		cout<<"entre 5 no  to print only even numbers"<<endl;
			for(i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<"\t";
		cin>>arr[i];
	}
	cout<<" entered 5 values are"<<endl;
		for(i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";	
	}
	
	for(i=0;i<5;i++)
	if(arr[i]%2==0)
	cout<<"even number is"<<arr[i];
	else
	cout<<"no even no";
	return 0;
}
