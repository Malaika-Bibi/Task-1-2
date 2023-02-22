#include <iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"entre 5 values to get maximum value"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"entre values"<<i+1<<":"<<"\t";
		cin>>arr[i];
	}
	cout<<" 5 values are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
				int max=arr[0];
			for(int  i=0;i<5;i++)
			{
				if(max<arr[i])
			max=arr[i];
			}
			cout<<endl<<"the maximum no is"<<max;
		return 0;
	
}
