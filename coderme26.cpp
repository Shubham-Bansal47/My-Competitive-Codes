#include <bits/stdc++.h>
using namespace std;

int min(int t1,int t2,int t3,int n)
{
          if(t1<t2 && t1<t3)
          {
                    cout<<t1/n;
          }
          else if(t2<t3)
          {
                    cout<<t2/n;
          }
          else
          {
                    cout<<t3/n;
          }
          
          return 0;
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    int i,j,t1,t2,t3,count=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    t1=(k*l)/nl;
    t2=c*d;
    t3=p/np;
    min(t1,t2,t3,n);
    
    return 0;
}