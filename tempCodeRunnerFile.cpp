#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            long long int i,j,n,k=1,sum=0,ans=0;
            cin>>n;
            for(i=1; i<=n; i++)
            {
                k=2*k;
            }
            for(i=1; i<=n-1; i++)
            {
                cout<<i<<" ";
                ans=ans+i;
            }
            sum=k-ans;
            if(sum%2==0)
            {
                cout<<sum/2<<" "<<sum/2<<"\n";
            }
            else 
            {
                cout<<sum-1<<" "<<1<<"\n";
            }
        }
}