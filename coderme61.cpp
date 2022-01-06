#include <bits/stdc++.h>
using namespace std;

int main() 
{
          int i,j,n,a=0,b=0,x,y;
          string s;
          cin>>s;
          x='0';
          y='1';
          for(i=0; i<s.size(); i++)
          {
                    if(x==s[i])
                    {
                              for(j=i; j<i+7; j++)
                              {
                                        if(s[j]==x)
                                        {
                                                  ++a;
                                        }
                                        
                              }
                              if(a==7)
                              {
                                        cout<<"YES";
                                        return 0;
                              }
                              a=0;
                    }
                    else if(y==s[i])
                    {
                               for(j=i; j<i+7; j++)
                              {
                                        if(s[j]==y)
                                        {
                                                  ++b;
                                        }
                                        
                              }
                              if(b==7)
                              {
                                        cout<<"YES";
                                        return 0;
                              }
                              b=0;  
                    }
          }
          cout<<"NO";

          return 0;
}