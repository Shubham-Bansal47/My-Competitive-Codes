#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t;
    string a;
    cin>>n>>t;
    cin>>a;
    for(i=0; i<t; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                a[j]='G';
                a[j+1]='B';
                j++;
            }
        }
    }
    cout<<a;
    return  0;
}