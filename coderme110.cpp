#include <bits/stdc++.h>
using namespace std;
 
int main()
{
          string s;
          cin>>s;
          long long int i,j,index;
          for(i=0; i<s.size(); i++)
          {
                    if(s[i]=='0')
                    {
                              index=i;
                              break;
                    }
          }
          for(i=0; i<s.size(); i++)
          {
                    if(i!=index)
                    {
                              cout<<s[i];
                    }
          }
          
          return 0;
}