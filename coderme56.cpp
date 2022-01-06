#include<bits/stdc++.h>
using namespace std;
int main()
{
       long long int i,j,x=0,y=0,n,k,key;
       cin>>n>>k;
       y=k;
       if(n==1)
       {
                 cout<<0;
       }
       else
       {
          up:
          for(i=1; i<=n; i++)
          {
                    if((i*(i+1))/2>k)       // k=0 i=1 key=1 x=1  
                    {                       // k=1 i=2 key=2 x=3  
                              key=i;        
                              break;
                    }
          }
          x=((key*(key+1))/2)-y;
          if((x+key)==n)
          {
                    cout<<x;
          }
          else 
          {
                    k=(key*(key+1))/2;
                    goto up;
          }
       }
       return 0;
}