#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,c;

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
	
	cout<<"check repeat";
	cin>>c;
	int count=0;
		for(int i=0;i<5;i++)
		if(c==arr[i]);
			count++;

	cout<<"found at index"<<count;

	
	return 0;
}
