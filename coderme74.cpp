#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j,x=0,y=0,a,b,count1=0;
          cin>>n;
          int arr[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          for(i=1; i<n; i++)
          {
                    for(j=0; j<=i-1; j++)
                    {
                              if(arr[i]<arr[0])
                              {
                                        if(arr[i]<arr[j])
                                        {
                                                  ++x;
                                        }
                              }
                              else
                              {
                                        if(arr[i]>arr[j])
                                        {
                                                  ++y;
                                        }
                              }
                    }
                    if(x==i || y==i)
                    {
                              ++count1;
                    }
                    x=0;
                    y=0;
          }
          cout<<count1;
          
          return 0;
}