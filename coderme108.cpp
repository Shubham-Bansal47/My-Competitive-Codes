#include <bits/stdc++.h>
using namespace std;
 
int main()
{
          int n,i,j,x=0,y=0,z=0;
          cin>>n;
          int arr[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          sort(arr,arr+n);
          for(i=n-1; i>=0; i--)
          {
                    if(arr[i]==200 && arr[i-1]==200)
                    {
                              --i;
                    }
                    else if(arr[i]==200 && arr[i-1]==100 && arr[i-2]==100)
                    {
                              i=i-2;
                    }
                    else if(arr[i]==100 && arr[i-1]==100)
                    {
                              --i;
                    }
                    else 
                    {
                              cout<<"NO";
                              return 0;
                    }
          }
          cout<<"YES";
          
          return 0;