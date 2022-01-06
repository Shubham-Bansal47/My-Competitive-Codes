#include <bits/stdc++.h>
using namespace std;
 
int main()
{
          long long int n,i,j,x=0,l=0;
          cin>>n;
          long long int arr[n],arr1[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          sort(arr,arr+n);
          for(i=0; i<n; i++)
          {
                    for(j=0; j<n; j++)
                    {
                              if(arr[i]==arr[j])
                              {
                                        ++x;
                              }
                    }
                    arr1[l]=x;
                    ++l;
                    x=0;
          }
          long long int max1=arr1[0];
          for(i=0; i<n; i++)
          {
                    if(max1<arr1[i])
                    {
                              max1=arr1[i];
                    }
          }
          if((max1-1)<=(n-max1))
          {
                    cout<<"YES";
          }
          else 
          {
                    cout<<"NO";
          }
          return 0;
}