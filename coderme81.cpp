#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,k,j,x=0,y=0,a,b,temp;
    cin>>t;
    for(k=0; k<t; k++)
    {
              cin>>n;
              long long int arr[n];
              for(j=0; j<n; j++)
              {
                        cin>>arr[j];
              }
              for(i=0; i<n; i++)
              {
                        for(j=i+1; j!=n; j++)
                        {
                                  if(j>i && ((arr[j]-arr[i])==(j-i)))
                                  {
                                            ++x;
                                  }
                        }
              }
              cout<<x<<endl;
              x=0;
    }
          
    return 0;
}