#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,n,m,arr[110],count=0;
          cin>>n>>m;
          vector<int> vec;
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
                    vec.push_back(arr[i]);
          }
          sort(vec.begin(),vec.end());
          for(i=0; i<m; i++)
          {
                    if(vec[i]<0)
                    {
                              count+=abs(vec[i]);
                    }
                    else if(vec[i]>=0)
                    {
                              break;
                    }
          }
          cout<<count;
          return 0;
}