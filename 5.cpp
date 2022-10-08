#include<iostream>
using namespace std;
int main()
{

	int i,j,a[5],n;
	cin>>n;
	for(i=0;i<=4;i++)
	{
       cin>>a[i];
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
			
		}
	}
	for(i=0;i<=4;i++)
	{
		cout<<endl<<a[i];
	}
	cout<<endl<<n<<" MINIMUN: "<<a[n];
	cout<<endl<<"MAXIMUM: "<<a[4];
	
}
