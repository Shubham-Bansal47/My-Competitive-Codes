#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,n,count=0;
          cin>>n;
          string s[200];
          for(i=0; i<n; i++)
          {
                    cin>>s[i];
          }
          for(i=0; i<n; i++)
          {
                    if((s[i][0]=='+' && s[i][1]=='+') || (s[i][1]=='+' && s[i][2]=='+'))
                    {
                              count++;
                    }
                    else if((s[i][0]=='-' && s[i][1]=='-') || (s[i][1]=='-' && s[i][2]=='-'))
                    {
                              count--;
                    }
          }
          cout<<count;
          return 0;
}