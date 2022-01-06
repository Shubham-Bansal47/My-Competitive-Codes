#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,n,count=0;
          cin>>n;
          string s[n],s1,s2;
          for(i=0; i<n; i++)
          {
                    cin>>s[i];
          }
          for(i=0; i<n; i++)
          {
                    if((s[0].compare(s[i]))==0)
                    {
                              ++count;
                    }
                    if((s[0].compare(s[i]))!=0)
                    {
                              s1=s[i];
                    }
          }
          if(count>(n/2))
          {
                    cout<<s[0];
          }
          else
          {
                    cout<<s1;
          }
          return 0;
}