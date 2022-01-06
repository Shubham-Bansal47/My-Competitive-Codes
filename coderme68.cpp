#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int q,c,m,x,i,j,y=0,a,b;
          cin>>q;
          for(i=0; i<q; i++)
          {
                    cin>>c>>m>>x;
                    if(c>0 && m>0 && (c+m+x)>=3)
                    {
                                        y=c+m+x;
                                        a=(y/3);
                                        if(a>min(c,m))
                                        {
                                                  cout<<min(c,m)<<endl;
                                        }
                                        else if(a<=min(c,m))
                                        {
                                                  cout<<a<<endl;
                                        }
                    }
                    else
                    {
                              cout<<0<<endl;
                    }
          }
          return 0;
}