#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,k,i,j,x=0,y=0,a=0,b=0;
          cin>>n>>k;
          long long int arr[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
                    while(arr[i]>0)
                    {
                              a=arr[i]%10;
                              if(a==4 || a==7)
                              {
                                        ++x;
                              }
                              arr[i]=arr[i]/10;
                    }
                    if(x<=k)
                    {
                              ++y;
                    }
                    x=0;
          }
          cout<<y;
          
          return 0;
}