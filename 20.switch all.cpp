#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"press 1 for separte even and odd\n";
	cout<<"press 2 for count even and odd\n";
	cout<<"press 3 for sort in descending order\n";
	cout<<"press 4 for sort in ascending oder\n";
	cout<<"press 5 for printing second smallest no\n";
	cout<<"press 6 for printing second largest no\n";
	cout<<"press 7 for checking two array are same or not\n";
	cout<<"press 8 to merge two unsorted array\n";
	cin>>number;
	switch(number)
	{
		case 1:
			{
	int arr[5],i,a;
	cout<<"entre 5 values  "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"entre values"<<i+1<<":"<<"\t";
		cin>>arr[i];
	}
	cout<<"values  are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int even1=0,odd1=0,even[5],odd[5];
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even[even1++]=arr[i];
		else
		odd[odd1++]=arr[i];
	}
	cout<<endl<<"even no";
	for(i=0;i<even1;i++)
	cout<<even[i];
	cout<<endl<<"odd no";
	for(i=0;i<odd1;i++)
	cout<<odd[i];
break;
}
case 2:
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
break;
}
case 3:
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
cout<<"in descending order";
	for(i=0;i<5;i++)
	{
	
	for(j=i+1;j<5;j++)
	{
	
	if(arr[i]<arr[j])
	{
		temp=0;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
	
	cout<<arr[i]<<"\t";
}
break;
}
case 4:
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
break;
}
case 5:
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
break;
}
case 6:
	case 7:
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
			break;
		}
		case 8:
			{
	int arr1[5],arr2[5],i,merge[5];
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
				merge[i]=arr1[i];
			}
			for(i=0;i<5;i++)
			{
				merge[i+1]=arr2[i];
			}
			cout<<"merged array";
			for(i=0;i<5+3;i++)
			{
				cout<<merge[i];
			}
			break;
		}
		default:
			{
				cout<<"invalid";
			}
	}
	return 0;
}
