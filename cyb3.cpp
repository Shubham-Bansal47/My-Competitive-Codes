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
    int t;
    cin>>t;
    while (t--)
    {
        int l,r,x=0,y=0,high=n-1,low=0,mid;
        cin>>l>>r;
        while(low<high)
        {
            mid=(high+low)/2;
            if(arr[mid]<l)
            {
                low=mid+1;
            }
            else if(arr[mid]>r)
            {
                high=mid-1;
            }
            else if(l<=arr[mid] && arr[mid]<=r && arr[mid-1]<l)
            {
                x=mid;
                break;
            }
            else
            {
                if(mid==0)
                {
                    x=mid;
                    break;
                }
                high=mid-1;
            }
        }
        low=0;
        high=n-1;
        while(low<high)
        {
            mid=(low+high)/2;
            if(arr[mid]<l)
            {
                low=mid+1;
            }
            else if(arr[mid]>r)
            {
                high=mid-1;
            }
            else if(l<=arr[mid] && arr[mid]<=r && arr[mid+1]>r)
            {
                y=mid;
                break;
            }
            else
            {
                y=mid+1;
                low=mid+1;
            }
        }
        // cout<<y<<" ";
        if(x>=y)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<arr[y]-arr[x]<<"\n";
        }
    }
    return 0;
}