#include<iostream>
using namespace std;

main()
{
	int i,j,a[3][3];
    
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
