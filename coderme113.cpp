#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0,y=0;
    cin>>n;
    string s,s1,s2;
    cin>>s;
    s1=s.substr(0,s.size()/2);
    s2=s.substr((s.size()/2),s.size()/2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(i=0; i<s1.size(); i++)
    {
              if(s1[i]<s2[i])
              {
                        ++x;
              }
    }
    for(i=0; i<s1.size(); i++)
    {
              if(s1[i]>s2[i])
              {
                        ++y;
              }
    }
    if(x==n || y==n)
    {
              cout<<"YES";
    }
    else 
    {
              cout<<"NO";
    }
    
    
    
    return 0;
}