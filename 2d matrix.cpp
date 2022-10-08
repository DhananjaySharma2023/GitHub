#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j;
	
	for(i=0;i<=9;i++)
     {
     cin>>a[i];	
     }
	
	for(i=0;i<=9;i++)
     {
     	
     	for(j=i+1;j<=9;j++)
     	{
     		if(a[i]>a[j])
     		{
     			swap(a[i],a[j]);
			 }
			 
		 }
		 }
	for(i=0;i<=9;i++)
     {	
     cout<<a[i]<<"\t";
 }
 cout<<endl<<"min = "<<a[0];
 cout<<endl<<"max= "<<a[9];
		 return 0;
}
