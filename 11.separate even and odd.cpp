#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,a;
	cout<<"entre 5 values  "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"entre values"<<i+1<<":"<<"\t";
		cin>>arr[i];
	}
	cout<<"values  are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int even1=0,odd1=0,even[5],odd[5];
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even[even1++]=arr[i];
		else
		odd[odd1++]=arr[i];
	}
	cout<<endl<<"even no";
	for(i=0;i<even1;i++)
	cout<<even[i];
	cout<<endl<<"odd no";
	for(i=0;i<odd1;i++)
	cout<<odd[i];


	

	return 0;
}
