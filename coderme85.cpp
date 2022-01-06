// not proper but working code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t=0,i,j,k,a,b,x=0,y=0;
    cin>>t;
    up:
    cin>>a>>b;
    vector<int> vec1,vec2;
    for(i=a; i<=pow(10,6); i=i+a)
    {
              if(i%b!=0)
              {
                        vec1.push_back(i);
              }
    }
    for(i=a*b; i<=pow(10,6); i=i+(a*b))
    {
              vec2.push_back(i);
    }
    for(i=0; i<vec2.size(); i++)
    {
              for(j=0; j<vec1.size()-1; j++)
              {
                        for(k=j+1; k<vec1.size(); k++)
                        {
                                if((vec1[j]+vec1[k])==vec2[i])
                                {
                                          cout<<"YES"<<endl;
                                          cout<<vec1[j]<<" "<<vec1[k]<<" "<<vec2[i]<<endl;
                                        ++x;
                                        if(x==t)
                                        {
                                                  return 0;
                                        }
                                        else 
                                        {
                                                  goto up;
                                        }
                                          
                                }
                        }
              }
    }
    cout<<"NO"<<endl;
    ++x;
    if(x==t)
    {
              return 0;
    }
    else 
    {
              goto up;
    }
    
    return 0;
}