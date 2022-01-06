#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k;
    cin>>n>>m;
    if(n%2==0)
    {
        if(m<=n/2)
        {
            cout<<2*m-1;
        }
        else 
        {
            cout<<2*m-n;
        }
    }
    else
    {
        if(m<=(n+1)/2)
        {
            cout<<2*m-1;
        }
        else 
        {
            cout<<2*m-n-1;
        }
    }
    
    return 0;
}