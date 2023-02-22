#include<iostream>
using namespace std;
int main()
{
	string az,i;
	cout<<"entre string to convert it into upercase"<<endl;
	getline(cin,az);
	for(  int i=0; i<az.length(); i++)
	if(az[i]>='a'&&az[i]<='z')
	az[i]=az[i]-32;
	cout<<"string in upercase"<<endl<<az<<endl;
	return 0;
}
