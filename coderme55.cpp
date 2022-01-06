#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
          long long int i,j,n,l,arr[1010],count=0,temp;
          double a,b,c,y=0;
          cin>>n>>l;
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          for(i=0; i<n-1; i++)
          {
                    for(j=0; j<n-i-1; j++)
                    {
                              if(arr[j]>arr[j+1])
                              {
                                        temp=arr[j];
                                        arr[j]=arr[j+1];
                                        arr[j+1]=temp;
                              }
                    }
          }
          for(i=0; i<n-1; i++)
          {
                    if(y<(arr[i+1]-arr[i]))
                    {
                              y=arr[i+1]-arr[i];
                    }
          }
          a=arr[0];
          b=l-arr[n-1];
          c=y/2;
          cout.precision(20);
          cout<<fixed<<max(c,max(a,b));
          return 0;
}