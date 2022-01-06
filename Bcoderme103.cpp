#include <bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          long long int arr[n],max1=1;
          for(int i=0; i<n; i++)
                    cin>>arr[i];
          
          sort(arr,arr+n);
          if(arr[0]==arr[n-1])
          {
                    cout<<n;
                    return 0;
          }
          if((arr[n-1]-arr[0])<=5)
          {
                    cout<<n;
                    return 0;
          }
          long long int l=0,r=0;      //only increment left pointer if next value is greater than 5
          for(; l<=r;)
          {
                    if((arr[r]-arr[l])<=5)
                    {
                              max1=max(max1,(r-l)+1);
                              r++;
                    }
                    else
                    {
                              l++;
                    }
                    if(r==n)
                              break;
          }
          cout<<max1;
          return 0;
}
                   