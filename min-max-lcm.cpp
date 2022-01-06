#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a,ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(ll a,ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    up:
    while(t--)
    {
        ll i,j=2,w,e,x,k,ans=100000000,sum=0;
        cin>>x>>k;
        if(x==k)
        {
            cout<<x<<" "<<x*x<<endl;
            continue;
        }
        if(k>=x)
        {
            w=x;
            e=k;
        }
        else
        {
            w=k;
            e=x;
        }
        for(i=x; i<min(w*e,x+10000000); i++)
        {
            j=lcm(w,i);
            ans=min(ans,j);
        }
        
        cout<<ans<<" "<<(w*e)*((w*e)-1)<<endl;
    }
}