#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,i,j,a,b,c,d,x=0,y=0,z=0,w=0,max1;
    string s;
    getline(cin,s);
    for(i=s.size()-1; i>=0; i--)
    {
              if(s[i]=='?')
              {
                        
              }
              else if(s[i]==' ')
              {
                        
              }
              else 
              {
                   s[i]=tolower(s[i]);
                   if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') 
                   {
                             cout<<"YES";
                             return 0;
                   }
                   else
                   {
                             cout<<"NO";
                             return 0;
                   }
              }
              
    }
   
    return 0;
}