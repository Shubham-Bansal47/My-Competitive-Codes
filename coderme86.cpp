#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,a,b,x=0,y=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
              if(arr[i]%2==0)
              {
                        ++x;
              }
              else
              {
                        ++y;
              }
    }
    if(x>y)
    {
              for(i=0; i<n; i++)
              {
                        if(arr[i]%2!=0)
                        {
                                  a=i;
                        }
              }
    }
    else if(y>x)
    {
              for(i=0; i<n; i++)
              {
                        if(arr[i]%2==0)
                        {
                                  a=i;
                        }
              }
    }
    cout<<a+1;
                    
    return 0;
}