#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x=0,y=0,a,b,min1;
    cin>>n>>m;
    int arr[m],arr1[m];
    vector<int> vec;
    for(i=0; i<m; i++)
    {
              cin>>arr[i];
              vec.push_back(arr[i]);
    }
    sort(vec.begin(),vec.end());
    for(i=0; i<m-n+1; i++)
    {
              arr1[i]=vec[i+(n-1)]-vec[i]; 
    }
    min1=arr1[0];
    for(i=0; i<m-n+1; i++)
    {
              if(arr1[i]<min1)
              {
                        min1=arr1[i];
              }
    }
    cout<<min1;
          
    return 0;
}