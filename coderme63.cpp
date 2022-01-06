#include <bits/stdc++.h>
using namespace std;
int main()
{
          long long int i,j,n,k,x=0,y=0,a,b;
          cin>>n>>k;
          long long int arr[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          sort(arr,arr+n);
          x=(n-1)/2;
          if(n==1)
          {
                    cout<<arr[0]+k;
                    return 0;
          }
          if(arr[x]+k<=arr[x+1])
          {
                    cout<<arr[x]+k;
                    return 0;
          }
          else if(arr[x]+k>arr[x+1])
          {
                    a=arr[x+1]-arr[x];
                    arr[x]=arr[x+1];
                    b=k-a;
                    up:
                    b--;
                    arr[x]=arr[x]+1;
                    sort(arr,arr+n);
                    if(b!=0)
                    {
                              goto up;
                    }
                    else
                    {
                              cout<<arr[x];
                              return 0;
                    }
          }
          
          return 0;
}