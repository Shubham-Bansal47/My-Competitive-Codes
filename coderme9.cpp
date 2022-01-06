#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,temp;
          string s;
          cin>>s;
          for(i=0; i<s.length()-1; i=i+2)
          {
                    for(j=0; j<(s.length()-i-1); j=j+2)
                    {
                              if(s[j]>s[j+2])
                              {
                                        temp=s[j];
                                        s[j]=s[j+2];
                                        s[j+2]=temp;
                              }
                    }
          }
          cout<<s;
          
          return 0;
}