#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,k,i,j,a,b,x=0,y=0,z=0;
    cin>>n>>m;
    char arr[n][m],arr1[m];
    char max1;
    for(i=0; i<n; i++)
    {
              for(j=0; j<m; j++)
              {
                        cin>>arr[i][j];
              }
    }
    for(i=0; i<m; i++)
    {
              max1='1';
              for(j=0; j<n; j++)
              {
                        if(arr[j][i]>max1)
                        {
                                  max1=arr[j][i];
                        }
              }
              arr1[i]=max1;
    }
    for(i=0; i<n; i++)
    {
              for(j=0; j<m; j++)
              {
                        if(arr1[j]==arr[i][j])
                        {
                                  ++x;
                                  break;
                        }
              }
    }
    cout<<x;
    
    return 0;
}