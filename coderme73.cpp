#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j,x=0,y=0,a,b,min1=0,max1=0,temp;
          cin>>n;
          int arr[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          for(i=n-1; i>=0; i--)
          {
                    if(max1<=arr[i])
                    {
                         max1=arr[i];
                         a=i;
                    }
          }
          for(i=a; i>=1; i--)
          {
                              temp=arr[i];
                              arr[i]=arr[i-1];
                              arr[i-1]=temp;
                              ++x;
          }
          min1=arr[0];
          for(i=0; i<n; i++)
          {
                    if(min1>=arr[i])
                    {
                              min1=arr[i];
                              b=i;
                    }
          }
          for(i=b; i<=n-2; i++)
          {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    ++x;
          }
          cout<<x;
          return 0;
}