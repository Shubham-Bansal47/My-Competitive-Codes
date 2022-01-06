#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,value;
          string s1,s2;
          cin>>s1;
          cin>>s2;
          for(i=0; i<s1.length(); i++)
          {
                    s1[i]=tolower(s1[i]);
          }
          for(i=0; i<s2.length(); i++)
          {
                    s2[i]=tolower(s2[i]);
          }
          value=s1.compare(s2);
          if(value>0)
          cout<<"1";
          else if(value<0)
          cout<<"-1";
          else if(value==0)
          cout<<"0";
          
          return 0;
}