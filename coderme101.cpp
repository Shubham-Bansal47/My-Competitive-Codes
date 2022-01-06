#include <bits/stdc++.h>
using namespace std;
int main()
{
          int n,m;
          cin>>n>>m;
          int arr[m],arr1[m],x=0,q=n;
          for(int i=0; i<m; i++)
          {
                    cin>>arr[i];
                    arr1[i]=arr[i];
                    x+=arr[i];
          }
          int y=0,w,z=0,u;
          if(n==x)
          {
                    for(int i=0; i<m; i++)
                              y+=(arr[i]*(arr[i]+1))/2;
                    
                    cout<<y<<" "<<y;
                    return 0;
          }
          int min,max;
          while(n--)
          {
                    sort(arr,arr+m);
                    y+=arr[m-1];
                    --arr[m-1];
          }
          while(q--)
          {
                    sort(arr1,arr1+m);
                    if(arr1[0]==0)
                    {
                              for(int i=1; i<m; i++)
                              {
                                        if(arr1[i]!=0)
                                        {
                                             z+=arr1[i];
                                             --arr1[i];
                                             break;
                                        }
                              }
                    }
                    else
                    {
                              z+=arr1[0];
                              --arr1[0];
                    }
          }
          cout<<y<<" "<<z;
                   
          return 0;
}