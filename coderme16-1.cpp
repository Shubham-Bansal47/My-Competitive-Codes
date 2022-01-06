#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,arr[n],arr1[n],arr3[n],count=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            arr[i]=i;
        }
        else if(i%2==0)
        {
            arr1[i]=i;
        }
    }
    for(i=1; i<=(n+1)/2; i++)
    {
            arr3[i]=arr[(2*i)-1];
            count++;
    }
    for(i=count+1; i<=n; i++)
    {
        arr3[i]=arr1[(2*(i-count))];
    }
    cout<<arr3[m];
    
    return 0;
}