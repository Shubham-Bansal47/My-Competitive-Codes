#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,arr[3],count=0,a,b,c;
    for(i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    a=sqrt((arr[0]*arr[1])/arr[2]);
    b=sqrt((arr[0]*arr[2])/arr[1]);
    c=sqrt((arr[1]*arr[2])/arr[0]);
    cout<<4*(a+b+c);

    return 0;
}