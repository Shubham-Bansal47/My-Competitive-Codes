#include <bits/stdc++.h>
#define ll long long int
#define loop(x,y) for(ll i=x; i<y; i++)
using namespace std;
int pos(ll n)
{
         ll i,j,x=0,w=0;
         vector<ll> vec1;
         while(n>0)
         {
                   vec1.push_back(n%2);
                   n=n/2;
         }
         for(i=vec1.size()-1; i>=0; i--)
         {
                   if(vec1[i]==0)
                   {
                             w=i+1;
                             break;
                   }
         }
         return w;
}
 
int main()
{
    ll n,i,k=0,w,x=0;
    cin>>n;
    ll arr[31];
    vector<ll> vec;
    for(i=0; i<31; i++)
             arr[i]=pow(2,i)-1; 
             
    for(i=0; i<31; i++)
    {
              if(arr[i]==n)
              {
                        cout<<0;
                        return 0;
              }
    }
    up:
    ll j=0,t;
    if(k%2==0)
    {
            t=pow(2,pos(n))-1;
            vec.push_back(pos(n));
            n=n^t;
            ++j;
            k+=j;
            for(i=0; i<31; i++)
            {
                      if(arr[i]==n)
                      {
                                goto end;
                      }
            }
            goto up;
    }
    else 
    {
              n=n+1;
              ++j;
              k+=j;
              for(i=0; i<31; i++)
              {
                        if(arr[i]==n)
                        {
                                  goto end;
                        }
              }
              goto up;
    }
    end:
    cout<<k<<endl;
    for(i=0; i<vec.size(); i++)
    {
              cout<<vec[i]<<" ";
    }

    return 0;
}