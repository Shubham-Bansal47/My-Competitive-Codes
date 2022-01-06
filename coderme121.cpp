#include <bits/stdc++.h>
#define ll long long int
#define loop(x,y) for(ll i=x; i<y; i++)
using namespace std;
 
int main()
{
    int i,d1=0,d2=0,n;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
              cin>>arr[i];
    
    int x,y;
    cin>>x>>y;
    if(y==x)
    {
              cout<<0;
    }
    else if(y>x)
    {
              for(i=x-1; i<y-1; i++)
              {
                    d1+=arr[i];           
              }
              for(i=y-1; i<n; i++)
              {
                        d2+=arr[i];
              }
              for(i=0; i<x-1; i++)
              {
                        d2+=arr[i];
              }
              cout<<min(d1,d2);
    }
    else
    {
              for(i=x-1; i<n; i++)
              {
                        d1+=arr[i];
              }
              for(i=0; i<y-1; i++)
              {
                        d1+=arr[i];
              }
              for(i=y-1; i<x-1; i++)
              {
                        d2+=arr[i];
              }
              cout<<min(d1,d2);
    }
          
    return 0;
}