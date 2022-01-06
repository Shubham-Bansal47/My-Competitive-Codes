#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,i,j,a,b,c,d,x=0,y=0,z=0,w=0,max1;
    cin>>n;
    long long int arr[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==arr[n-1])
    {
              cout<<0<<" "<<((n-1)*n)/2;
              return 0;
    }
    max1=arr[n-1]-arr[0];
    cout<<max1<<" ";
    for(i=0; i<n; i++)
    {
              if(arr[0]==arr[i])
              {
                        ++x;
              }
              if(arr[n-1]==arr[i])
              {
                        ++y;
              }
    }
    cout<<x*y;
    return 0;
}