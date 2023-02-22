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
	cout<<"values are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int even=0,odd=0;
		for(i=0;i<5;i++)	
		if(arr[i]%2==0)
		even++;
		else
		odd++;

cout<<endl<<"total no of even"<<even;
cout<<endl<<"total no of odd"<<odd;
return 0;
}
