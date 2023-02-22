#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp;
	cout<<"entre 5 no"<<endl;
	for(i=0;i<5;i++)
	{
	
	cout<<"values are"<<i+1<<":"<<"\t";
	cin>>arr[i];
}
cout<<"elements are";
	for(i=0;i<5;i++)
	{
	
	cout<<arr[i]<<endl;
	
}
cout<<"in ascending order";
	for(i=0;i<5;i++)
	{
	
	for(j=i+1;j<5;j++)
	{
	
	if(arr[i]>arr[j])
	{
		temp=0;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
	
	cout<<arr[i]<<"\t";
}
	return 0;
}
