#include<iostream>
using namespace std;
 
int main()
{
	int i,j,a[4];
	for(i=0;i<4;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
			swap(a[i],a[j]);
			}
		}
	}
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl<<"Minimum Array: "<<a[0];
	cout<<endl<<"Maximum Array: "<<a[3];
}
