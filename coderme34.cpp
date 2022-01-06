#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,arr[100010],i,count=0,max,x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];    
    }
    max=arr[0];
    x=1;
    for(i=0; i<n; i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];
            x=i+1;
        }
    }
    for(i=0; i<n; i++)
    {
        if(max==arr[i])
        {
            ++count;
        }
    }
    if(count==1)
    {
        cout<<x;
    }
    else if(count>=2)
    {
        cout<<"Still Rozdil";
    }
    return 0;
}