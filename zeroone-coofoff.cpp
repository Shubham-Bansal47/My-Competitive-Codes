#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j=0,k=0,first=0,ans=0;
        cin>>n;
        vector<ll> one;
        vector<ll> zero;
        vector<ll> vec;
        ll arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                zero.push_back(arr[i]); 
            }
            else
            {
                one.push_back(arr[i]);
            }
        }
        sort(one.begin(),one.end());
        sort(zero.rbegin(),zero.rend());
        for(i=0; i<one.size()+zero.size(); i++)
        {
            if(i%2==0)
            {
                vec.push_back(zero[j]);
                ++j;
            }
            else
            {
                vec.push_back(one[k]);
                ++k;
            }
        }
        for(i=0; i<vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        for(i=0; i<vec.size(); i+=2)
        {
            for(j=i+1; j<vec.size(); j+=2)
            {
                first=first+vec[j];
            }
            ans=ans+(vec[i]*first);
            first=0;
        }
        cout<<"\n"<<ans<<"\n";
    }
    return 0;
}