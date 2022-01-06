#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,k;
    cin>>t;
    for(k=0; k<t; k++)
    {
        ll i,j,n;
        cin>>n;
        if(n==1 || n==2)
        {
            cout<<1<<"\n";
            continue;
        }
        else if(n==3)
        {                    
            cout<<3<<"\n";
            continue;
        }
        if(n%2!=0)
        {
            i=n*(n-1)/2;
            cout<<i<<"\n";
        }
        else
        {
            i=(n*(n+1)/2) - (n-1); 
            cout<<i<<"\n";
        }
    }
}