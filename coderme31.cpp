#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,m,i,arr[110],arr1[110],count;
          cin>>n>>m;
          for(i=0; i<n; i++)
          {
              cin>>arr[i];
          }
          up:
          count=0;
          for(i=0; i<n; i++)
          {
                    if(arr[i]<=m)
                    {
                              count++;
                    }
          }
          if(count==n)
          {
                    for(i=(n-1); i>=0; i--)
                    {
                              if(arr[i]>0)
                              {
                                        cout<<i+1;
                                        return 0;
                              }
                    }
          }
          else 
          {
                    for(i=0; i<n; i++)
                    {
                              arr[i]-=m;
                    }
          }
          goto up;
          return 0;
}