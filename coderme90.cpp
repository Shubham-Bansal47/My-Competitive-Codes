#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,f,i,j,a,b,x=0,y=0,z=0,max1;
    cin>>a>>b;
    for(i=1; i<=6; i++)
    {
              if(abs(i-a)<abs(i-b))
              {
                        ++x;
              }
              else if(abs(i-a)==abs(i-b))
              {
                        ++y;
              }
              else
              {
                        ++z;
              }
    }
    cout<<x<<" "<<y<<" "<<z; 
    
    return 0;
}