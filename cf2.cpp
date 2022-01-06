#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,sum=0;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        j=1;
        for(i=0; i<n; i++)
        {
            if(arr[i]>j)
            {
                sum+=arr[i]-j;
                j+=arr[i]-j+1;
            }
            else
            {
                ++j;
            }
        }
        cout<<sum<<"\n";
    }
}