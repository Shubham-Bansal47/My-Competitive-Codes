#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j,x=0,y=0,k=0,a,b,max1=0,min1=0;
          cin>>n;
          int arr[n],arr1[n],arr2[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
                    arr1[i]=arr[i];
          }
          for(i=1; i<=n-2; i++)
          {
                    for(j=i+1; j<=n-1; j++)
                    {
                              arr1[j-1]=arr[j];
                    }
                    max1=arr1[1]-arr1[0];
                    for(j=0; j<=n-3; j++)
                    {
                              if((arr1[j+1]-arr1[j])>max1)
                              {
                                        max1=arr1[j+1]-arr1[j];
                              }
                    }
                    arr2[i-1]=max1;
                    for(j=0; j<n; j++)
                    {
                              arr1[j]=arr[j];
                    }
          }
          min1=arr2[0];
          for(i=0; i<n-2; i++)
          {
                    if(min1>arr2[i])
                    {
                              min1=arr2[i];
                    }
          }
          cout<<min1;
          
          return 0;
}