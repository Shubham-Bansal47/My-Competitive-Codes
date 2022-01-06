#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,i,j,a,b,c,d,x=0,y=0,w=0,max1;
    cin>>n;
    int arr[n][2];
    for(i=0; i<n; i++)
    {
              for(j=0; j<2; j++)
              {
                        cin>>arr[i][j];
              }
    }
    for(i=0; i<n; i++)
    {
              if((arr[i][1]-arr[i][0])>=2)
              {
                        ++x;
              }
    }
    cout<<x;
    
    return 0;
}