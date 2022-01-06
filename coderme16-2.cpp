#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,arr[n],count=0;
    cin>>n>>m;
    for(i=1; i<=(n+1)/2; i++)
    {
            arr[i]=((2*i)-1);
            count++;                    
    }
    for(i=count+1; i<=n; i++)
    {
             arr[i]=2*(i-count);     
    }
    cout<<arr[m];
    
    return 0;
}