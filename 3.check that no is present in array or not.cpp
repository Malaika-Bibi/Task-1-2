#include <iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"entre 5 values "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"entre values"<<i+1<<":"<<"\t";
		cin>>arr[i];
	}
	cout<<"values are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	int found,n;
	cout<<"entre no to found";
	cin>>n;
	found=0;
	for(i=0;i<5;i++)
	if(arr[i]==n)
	found=1;
	if(found==0)
	cout<<"not found";
	else
	cout<<"found";
		return 0;

}
