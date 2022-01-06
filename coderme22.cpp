#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,arr[1100][2];
    int j;
    static int count=0,max=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
              for(j=0; j<2; j++)
              {
                       cin>>arr[i][j]; 
              }
    }
    for(i=0; i<n; i++)
    {
                   count-=arr[i][0];
                   count+=arr[i][1];
                   if(max<=count)
                   {
                             max=count;
                   }
           
    }
    cout<<max;
    
    return 0;
}