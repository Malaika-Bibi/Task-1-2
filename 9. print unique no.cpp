#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;

		cout<<"entre 5 no to print only unique no "<<endl;
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
		{
				 cout<<"unique number"<<endl;
					for(int i=0;i<5;i++)
				{
					int count=0;
					for(int j=0;j<5;j++)
					{
						if(arr[i]==arr[j])	
						{
							count++;
						}
					}
					if(count==1)
					{
					cout<<arr[i]<<" ";
					}
					
}
}
return 0;
}
