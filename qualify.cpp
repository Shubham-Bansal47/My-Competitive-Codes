#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,sum=0,n,k;
        cin>>n>>k;
        int arr[n];
        vector<int> vec;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            vec.push_back(arr[i]);
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        for(i=0; i<vec.size(); i++)
        {
            if(vec[i]>=vec[k-1])
            {
                ++sum;
            }
            else
            {
                break;
            }
        }
        cout<<sum;
    }
}