#include<iostream>
using namespace std;
int main()
{
	int arr[5],small,secondsmall,i;
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
cout<<"now we print second small"<<endl;
{
small=arr[0];
	for(i=0;i<5;i++)
	{
		
		if(small>arr[i])
		small=arr[i];
	}
	secondsmall=arr[1];
	for(i=0;i<5;i++)
	{
		if(secondsmall>arr[i])
		{
			if(arr[i]!=small)
			secondsmall=arr[i];
		}
	}
	cout<<"second smallest no is"<<secondsmall;
}
return 0;
	
}
