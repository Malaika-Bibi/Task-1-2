#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;

		cout<<"entre 5 no "<<endl;
			for(i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<"\t";
		cin>>arr[i];
	}
	cout<<"5 values are"<<endl;
		for(i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";	
	}
	int sum=0;
		for(i=0;i<5;i++)
		
			sum=sum+arr[i];
			cout<<sum;
		
		return 0;
	}
