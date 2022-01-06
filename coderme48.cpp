#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int i,j,t,n,k,arr[100010];
        cin>>t;
        for(i=0; i<t; i++)
        {
                  long long int x=0,y=0,z=0;
                  cin>>n>>k;
                  for(j=0; j<n; j++)
                  {
                            cin>>arr[j];
                            if(k>=arr[j])
                              {
                                        z+=arr[j];
                              }
                  }
                  if(k>=arr[n-1])
                  {
                            x=((k*(k+1))/2)-(2*(z));
                  }
                  else if(k<arr[n-1])
                  {
                            x=((k*(k+1))/2)-(2*(z));
                  }
          cout<<x<<endl;        
        }
        return 0;
}