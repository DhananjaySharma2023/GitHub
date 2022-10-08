#include<iostream>
using namespace std;


class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        //code here
        int i,j;
        
        for(i=l;i<r;i++)
        {
            for(j=i+1;j<r;j++)
            {
                if(arr[i]>arr[j])
                
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
        for(i=l;i<r;i++)
        {
            cout<<arr[i]<<"\t";
        }
        
        cout<<"\n"<<arr[k];
    }
};

int main()
{    
    int a[6]={7,10,4,3,20,15};
    Solution s1;
    s1.kthSmallest(a,0,6,2);
    return 0;
}
