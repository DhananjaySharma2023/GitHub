#include<iostream>
using namespace std;
int main()
{
	int i,c[2],a[2]={11,22},b[2]={33,44};
	for(i=0;i<2;i++)
	{
		cout<<a[i]<<endl;
	}
	for(i=0;i<2;i++)
	{
		cout<<b[i]<<endl;
	}
	for(i=0;i<2;i++)
	{
		c[i]=a[i] + b[i];
		cout<<c[i];
	}
	return 0;
}
