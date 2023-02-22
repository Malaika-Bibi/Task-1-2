#include <iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"entre five values to get minimum value"<<endl;
	for( int i=0;i<5;i++)
	{
		cout<<"entre values"<<i+1<<":"<<"\t";
		cin>>arr[i];
	}
	cout<<" 5 values are"<<endl;
	for( int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int min=arr[0];
			for(int  i=0;i<5;i++)
			{
				if(min>arr[i])
			min=arr[i];
			}
			cout<<endl<<"the minimum no is"<<min;
		return 0;
	
}
