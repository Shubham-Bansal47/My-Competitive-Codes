#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,k,i,j,a,b,x=0,y=0,z=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
              if(arr[i]>0)
              {
                      x=x+arr[i];  
              }
              else
              {
                      if(x==0)
                      {
                                ++y;
                      }
                      else
                      {
                                x--;
                      }
              }
    }
    cout<<y;
    return 0;
}