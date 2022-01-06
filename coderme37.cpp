#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0,y=0;
    string  s[i];
    cin>>n;
    for(i=0; i<=n-1; i++)
    {
        cin>>s[i];
    }
    cout<<"NO"<<endl;
    for(i=1; i<=n-1; i++)
    {
        for(j=i; j>=0; j--)
        {
            if((s[i].compare(s[j]))==0)
            {
                ++y;
            }
        }
        if(y>=2)
        {
            cout<<"YES"<<endl;
        }
        else if(y==0 || y==1)
        {
            cout<<"NO"<<endl;
        }
        y=0;
    }
    return 0;
}