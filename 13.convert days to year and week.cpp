#include<iostream>
using namespace std;
int main()
{
	float year,week,day;
	
	cout<<"entre days to convert it into weeks and year"<<endl;
	cin>>day;
	year=day/365;
	week=day/7;
	cout<<"years"<<year<<endl;
	cout<<"days"<<day<<endl;
	cout<<"weeks"<<week<<endl;
	return 0;
}
