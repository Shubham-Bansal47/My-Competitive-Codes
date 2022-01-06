#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
          ll i,j,x=0,a,b,t;
          cin>>t;
          for(i=0; i<t; i++)
          {
                    cin>>a>>b;
                    if(a%b==0)
                    {
                              cout<<0<<endl;
                    }
                    else
                    {
                              cout<<b-(a%b)<<endl;
                    }
          }
          
          return 0;
}