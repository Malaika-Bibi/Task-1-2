#include<iostream>
using namespace std;
int main()
{
	int arr1[5],arr2[5],i;
	cout<<"entre elements of forst array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<":"<<"\t";
		cin>>arr1[i];
			}
			cout<<"entre elements of second array"<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"values"<<i+1<<":"<<"\t";
				cin>>arr2[i];
			}
			for(i=0;i<5;i++)
			{
				if(arr1[i]==arr2[i])
			cout<<"equal";
			else
			cout<<"not equal";
			}
			return 0;
		}
			
