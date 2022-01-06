#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,y,a=0,b=0;
    cin>>n;
    cin>>x;
    int arr1[x];
    for(i=0; i<x; i++)
    {
              cin>>arr1[i];
    }
    cin>>y;
    int arr2[y],arr[2*n];
    for(i=0; i<y; i++)
    {
              cin>>arr2[i];
    }
    for(i=0; i<x; i++)
    {
             arr[i]=arr1[i]; 
    }
    for(i=x; i<x+y; i++)
    {
              arr[i]=arr2[i-x];
    }
    if(x==0 && y==0)
    {
        cout<<"Oh, my keyboard!";
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<x+y; j++)
        {
            if(i==arr[j])
            {
                ++a;
            }
        }
        if(a==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
        a=0;
    }
    cout<<"I become the guy.";
    
    return 0;
}