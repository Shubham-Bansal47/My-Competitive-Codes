#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,arr[12],k,x=0,y=0;
          cin>>k;
          vector<int> vec;
          for(i=0; i<12; i++)
          {
                    cin>>arr[i];
                    vec.push_back(arr[i]);
          }
          sort(vec.begin(),vec.end());
          for(i=vec.size()-1; i>=0; i--)
          {
                    if(x<k)co
                    {
                              x+=vec[i];
                              ++y;
                    }
                    else
                    {
                              break;
                    }
          }
          if(x>=k)
          {
                    cout<<y;
          }
          else
          {
                    cout<<-1;
          }
          return 0;
}