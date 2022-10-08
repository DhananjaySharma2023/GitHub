#include<iostream>
using namespace std;
int main()
{
	int i,a[2]={69,69},b[2]={75,75},c[2];
	for(i=0;i<2;i++)
	{
		cout<<a[i]<<endl;
	}
		for(i=0;i<2;i++)
	{
		cout<<b[i]<<endl;
	}
	cout<<"{";
	for(i=0;i<2;i++)
	{
		c[i]=a[i]*b[i];
		cout<<c[i]<<", ";
		
	}
	cout<<"}";
}
