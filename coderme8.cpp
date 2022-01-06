#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,arr[n];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(j=0; j<n-1; j++)
    {
        for(i=0; i<n-j-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}