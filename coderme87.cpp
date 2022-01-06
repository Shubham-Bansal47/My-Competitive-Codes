#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,a,b,x=0,y=0;
    cin>>n>>k;
    vector<int> vec;
    int arr[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
              if((arr[i]+k)<=5)
              {
                    vec.push_back(arr[i]);    
              }
    }
    cout<<vec.size()/3;
                    
    return 0;
}