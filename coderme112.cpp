#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int y,k,n,i,j,x=0,rem,max;
    cin>>y>>k>>n;
    max=n-y;
    rem=k-(y%k);
    for(i=rem; i<=max; i=i+k)
    {
              ++x;
              cout<<i<<" ";
    }
    if(x==0)
    {
          cout<<-1;    
    }
    
    return 0;
}