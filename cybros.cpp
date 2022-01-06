#include <bits/stdc++.h>
#define ll long long int
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
using namespace std;

int main()
{
    fastIO;
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll t;
    cin>>t;
    while (t--)
    {
        int l,r,x,ans=-1;
        x=n;
        cin>>l>>r;
        for(i=0; i<x-1; i++)
        {
            for(j=x-1; j>=0; j--)
            {
                if(i>=j)
                {
                    goto down;
                }
                if(l<=arr[i] && arr[i]<=r && l<=arr[j] && arr[j]<=r)
                {
                    ans=max(ans,arr[j]-arr[i]);
                }
                else if(arr[i]<l)
                {
                    break;
                }
                else if(arr[j]>r)
                {
                    x=j-1;
                    continue;
                }
            }
        }
        down:
        cout<<ans<<"\n";
    }
    return 0;
}