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
        i=0;
        j=x-1;
        while(i<x)
        {
            if(l<=arr[i] && arr[i]<=r)
            {
                for(j=i+1; j<x; j++)
                {
                    if(arr[j]>r)
                    {
                        break;
                    }
                    else
                    {
                        ans=max(ans,arr[j]-arr[i]);
                    }
                }
            }
            else if(arr[i]>r)
            {
                break;
            }
            ++i;
        }
        cout<<ans<<"\n";
    }
    return 0;
}