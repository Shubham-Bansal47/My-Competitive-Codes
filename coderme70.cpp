#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j,arr[110],x=0,y=0;
          cin>>n;
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          for(i=0; i<n; i++)
          {
                    for(j=0; j<n; j++)
                    {
                              if(i+1==arr[j])
                              {
                                        cout<<j+1<<" ";
                              }
                    }
          }
          return 0;
}