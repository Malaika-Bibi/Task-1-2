   #include<iostream>>
using namespace std;
int main()
{
	int arr[5],i,number;
	{
	
		cout<<"press 1 for minimum\n";
	cout<<"press 2 for maximum\n";
	cout<<"press 3 for search\n";
	cout<<"press 4 for repate value\n";
		cout<<"press 5for odd no\n";
			cout<<"press 6 for even no\n";
				cout<<"press 7for sum \n";
					cout<<"press 8 for reverse array \n";
					cin>>number;
				}
switch(number)
	{
	
		case 1:
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
		
  break;
}

case 2:
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
break;
}
case 3:
	{
	int arr[5],i;
	cout<<"entre 5 values "<<endl;
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
	
	int found,n;
	cout<<"entre no to found";
	cin>>n;
	found=0;
	for(i=0;i<5;i++)
	if(arr[i]==n)
	found=1;
	if(found==0)
	cout<<"not found";
	else
	cout<<"found";
}
break;
case 4:
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
}
break;
case 5:
	{
	int arr[5],i;

		cout<<"entre 5 no to print only odd number "<<endl;
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
	for(i=0;i<5;i++)
	if(arr[i]%2!=0)
	cout<<"odd number is"<<arr[i];
}
break;
case 6:
	{
	int arr[5],i;

		cout<<"entre 5 no  to print only even numbers"<<endl;
			for(i=0;i<5;i++)
	{
		cout<<"values"<<i+1<<"\t";
		cin>>arr[i];
	}
	cout<<" entered 5 values are"<<endl;
		for(i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";	
	}
	
	for(i=0;i<5;i++)
	if(arr[i]%2==0)
	cout<<"even number is"<<arr[i];
	
}
break;
case 7:
	{
	int arr[5],i;

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
	int sum=0;
		for(i=0;i<=5;i++)
		
			sum=sum+arr[i];
			cout<<sum;
	}
	break;
	case 8:
		{
	int arr[5],i;
	cout<<"entre 5 no to reverse them"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"value"<<i+1<<":"<<"\t";
		cin>>arr[i];
			}
			cout<<"reverse no are";
			for(i=4;i>-1;i--)
			{
				cout<<arr[i];
			}
}
case 9:

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
	
break;

 default:
	{
		cout<<"invalid";
	}
	return 0;

}
}
	
