#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[110],i,j,count=0;
    vector<int> vec;
    cin>>n;
    for(i=0; i<=n-1; i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    sort(vec.begin(), vec.end());
    for(i=0; i<=n-2; i++)
    {
        if(vec[i+1]>vec[i])
        {
            cout<<vec[i+1];
            return 0;
        }
    }
    if(vec[0]==vec[n-1])
    {
        cout<<"NO";
    }
    return 0;
}