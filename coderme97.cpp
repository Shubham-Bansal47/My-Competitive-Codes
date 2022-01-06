#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,i,j,a,b,c,d,x=0,y=0,z=0,w=0,max1;
    cin>>n>>m;
    int arr[n][2*m];
    for(i=0; i<n; i++)
    {
          for(j=0; j<2*m; j++)
          {
                    cin>>arr[i][j];
          }
    }                    
    for(i=0; i<n; i++)
    {
          for(j=0; j<2*m-1; j=j+2)
          {
                    if(arr[i][j]==1)
                    {
                              ++x;
                    }
                    else if(arr[i][j+1]==1)
                    {
                              ++x;
                    }
          }
    }                    
    cout<<x;
    
    return 0;
}