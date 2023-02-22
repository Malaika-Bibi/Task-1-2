#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;

		cout<<"entre 5 no to print only odd number "<<endl;
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
	for(i=0;i<5;i++)
	if(arr[i]%2!=0)
	cout<<"odd number is"<<arr[i];
	
	return 0;
}
