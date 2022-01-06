#include <bits/stdc++.h>
#define ll long long int
#define loop(x,y) for(ll i=x; i<y; i++)
using namespace std;
 
int main()
{
    ll i,j,n;
    cin>>n;
    ll arr[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    ll sum=arr[0]+arr[n-1]+n;
    if(n==1)
    {
             sum=(2*n)+1; 
    }
    else
    {
              for(i=0; i<n-1; i++)
              {
                    if(arr[i]<arr[i+1])
                    {
                              sum+=arr[i+1]-arr[i];
                    }
                    else if(arr[i]>arr[i+1])
                    {
                              sum+=arr[i]-arr[i+1];
                    }
              }
    }
    cout<<sum;
    
    return 0;
}