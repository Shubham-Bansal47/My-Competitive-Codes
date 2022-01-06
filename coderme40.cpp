#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,count=0,x=0,y;
    string s1[110],s2[110],s3[110];
    cin>>n;
    for(i=0; i<n; i++)
    {
              cin>>s1[i]>>s2[i];
              s3[i]=s1[i]+"$"+s2[i];
    }
    for(i=0; i<n; i++)
    {
              for(j=i+1; j<n; j++)
              {
                        if((s3[i].compare(s3[j]))==0)
                        {
                                  s3[j]="got";
                        }
              }
    }
    for(i=0; i<n; i++)
    {
              if((s3[i].compare("got"))==0)
              {}
              else 
              {
                        ++count;
              }
    }
    cout<<count;
    return 0;
}