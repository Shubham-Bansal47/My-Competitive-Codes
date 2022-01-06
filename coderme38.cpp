#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,arr[n],i,j,x=0,y=0;
    vector<int> vec;
    cin>>n;                                   //1 2 3 3  x=2 i=3
    for(i=0; i<=n-1; i++)                                
    {
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    for(i=1; i<=n; i++)
    {
        x=count(vec.begin(),vec.end(),i);
        if(x>i)
        {
            y=y+(x-i);
        }
        else if(x<i)
        {
            y=y+(x);
        }
        x=0;
    }
    cout<<y;

    return 0;
}