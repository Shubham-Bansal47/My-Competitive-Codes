#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m;
    int count;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        if(m>=i)
        {
            m=m-i;    
        }
        else 
        {
           cout<<m;
           return 0;
        }
        if(i==n)
        {
            i=0;
        }
    }
    
    return 0;
}
