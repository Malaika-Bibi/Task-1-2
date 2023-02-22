#include<iostream>
using namespace std;
int main()
{
	string az,i;
	cout<<"entre string to convert it into lowercase"<<endl;
	getline(cin,az);
	for(  int i=0; i<az.length(); i++)
	if(az[i]>='A'&&az[i]<='Z')
	az[i]=az[i]+32;
	cout<<"string in lowercase"<<endl<<az<<endl;
	return 0;
}
