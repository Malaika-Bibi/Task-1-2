#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"entre year to check it is leap year or not:"<<endl;
cin>>year;
if(year%4==0)
cout<<"leap year"<<endl;
else if(year%100==0 &&year%400==0)
cout<<"leap year"<<endl;
else
cout<<"not leap year"<<endl;
return 0;
}
