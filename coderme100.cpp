#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,b,x=0,y=0,max1;
    cin>>n;
    int arr[n],arr1[n][102],arr2[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
              arr2[i]=0;
    }
    for(i=0; i<n; i++)
    {
              for(j=0; j<arr[i]; j++)
              {
                        cin>>arr1[i][j];
              }
    }
    for(i=0; i<n; i++)
    {
              for(j=0; j<arr[i]; j++)
              {
                        arr2[i]+=(arr1[i][j]*5);
              }
              arr2[i]+=(arr[i]*15);
    }
    int min1=arr2[0];
    for(i=0; i<n; i++)
    {
              if(min1>arr2[i])
              {
                        min1=arr2[i];
              }
    }
    cout<<min1;
    return 0;
}