#include <bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j,x=0,y=0;
          cin>>n;
          int arr[n];
          string s;
          cin>>s;
          vector<char> vec;
          set<char> se;
          set<char> :: iterator it;
          it=se.begin();
          for(i=0; i<s.size(); i++)
          {
                    se.insert(s[i]);
          }
          for(auto it=se.begin(); it!=se.end(); it++)
          {
                    vec.push_back(*it);
          }
          x=s.size()%vec.size();
          y=s.size()/vec.size();
          for(i=0; i<vec.size(); i++)
          {
                    arr[i]=count(s.begin(),s.end(),vec[i]);
          }
          for(i=0; i<vec.size(); i++)
          {
                    for(j=0; j<vec.size(); j++)
                    {
                              if(arr[i]==arr[j])
                              {
                                        
                              }
                              else
                              {
                                        cout<<-1;
                                        return 0;
                              }
                    }
          }
          if(x!=0)
          {
                    cout<<-1;
                    return 0;
          }
          else 
          {
                    for(i=0; i<y; i++)
                    {
                              for(j=0; j<vec.size(); j++)
                              {
                                        cout<<vec[j];
                              }        
                    }
          }
          
          return 0;
}