#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,count;
    cin>>n>>m;
    up:
    count=0;
    n++;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>=3)
    {
        goto up;
    }
    else if(count==2)
    {
        if(n==m)
        {
            cout<<"YES";
        }
        else 
        {
            cout<<"NO";
        }
    }
    return 0;
}