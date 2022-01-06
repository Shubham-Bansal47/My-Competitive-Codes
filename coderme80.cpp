#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,k,j,x=0,y=0,a,b,temp;
    cin>>t;
    string s;
    if(t==1)
    {
              cin>>n;
              cin>>s;
              cout<<"YES";
              return 0;
    }
    up:
    for(i=1; i<=t; i++)
    {
             cin>>n;
             cin>>s;
          for(j=0; j<n-1; j++)
          {
                    if(s[j]==s[j+1])
                    {
                              
                    }
                    else
                    {
                           for(k=0; k<=j; k++)
                           {
                                     if(s[j+1]==s[k])
                                     {
                                               cout<<"NO"<<endl;
                                               t--;
                                               goto up;
                                     }
                           }
                    }
          }
          cout<<"YES"<<endl;
    }
    
          
    return 0;
}