#include<iostream>
using namespace std;
int main()
{
	int arr[5],large,secondlarge,i;
	cout<<"entre 5 no"<<endl;
	
	
	for(i=0;i<5;i++)
	{
	
	cout<<"values"<<i+1<<":"<<"\t";
	cin>>arr[i];
}

cout<<"elements are"<<"\t";
for(i=0;i<5;i++)

cout<<arr[i];
cout<<endl;
cout<<"now we print second large"<<endl;
{
large=arr[0];
	for(i=0;i<5;i++)
	{
		
		if(large<arr[i])
		large=arr[i];
	}
	secondlarge=arr[1];
	for(i=0;i<5;i++)
	{
		if(secondlarge<arr[i])
		{
			if(arr[i]!=large)
			secondlarge=arr[i];
		}
	}
	cout<<"second larger no is"<<secondlarge;
}
return 0;
	
}
