#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,arr[7],i,j,x=0;
          cin>>n;
          for(i=0; i<=6; i++)
          {
                    cin>>arr[i];
                    x+=arr[i];
          }
          up:
          for(i=0; i<=6; i++)
          {
                    if((n>arr[6]) && (i==6))
                    {
                              n-=arr[6];
                              goto up;
                    }
                    if(n>=arr[i])
                    {
                              n-=arr[i];
                              if(n==0)
                              {
                                        cout<<i+1;
                                        return 0;
                              }
                    }
                    else if(n<arr[i])
                    {
                              cout<<i+1;
                              return 0;
                    }
          }
          return 0;
}