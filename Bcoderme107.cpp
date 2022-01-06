#include <bits/stdc++.h>
using namespace std;
 
int main()
{
          string s1,s2;
          int i,j,x=0;
          getline(cin,s1);
          getline(cin,s2);
          for(i=0; i<s2.size(); i++)
          {
                    if(s2[i]==' ')
                              continue;
                    
                    for(j=0; j<s1.size(); j++)
                    {
                              if(s2[i]==s1[j])
                              {
                                        ++x;
                                        s1[j]='0';
                                        break;
                              }
                    }
                    if(x==0)
                    {
                           cout<<"NO";
                           return 0;
                    }
                    x=0;
          }
          cout<<"YES";
          return 0;
}