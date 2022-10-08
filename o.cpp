#include<iostream>
using namespace std;
int main()
{
	int i,a[2]={546,765},b[2]={289,786},c[2];
	for(i=0;i<2;i++)
	{
		cout<<a[i]<<"\t";
	}
	for(i=0;i<2;i++)
	{
		cout<<b[i]<<"\t";
	}
	for(i=0;i<2;i++)
	{
		c[i]=a[i]+b[i];
		cout<<endl<<c[i]<<"\t";
	}
	return 0;
}
