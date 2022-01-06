#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int i,j,n,k,x;
        cin>>n>>k;
        for(i=0; i<k; i++)
        {
                  x=n%10;
                  if(x==0)
                  {
                            n/=10;
                  }
                  else 
                  {
                              n-=1;     
                  }
        }
        cout<<n;
        return 0;
}