#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int arr[5]={1,1,1,1,0};
    int n=5;
    long long int i,j,sum=0,count=0;
        map<long long int,long long int> m;
        for(i=0; i<n; i++)
        {
            if(arr[i]==0)
            {
                arr[i]=-1;
            }
        }
        m[0]=1;
        for(i=0; i<n; i++)
        {
            sum=sum+arr[i];
            count=count+m[sum];
            m[sum]++;
        }
        cout<<count;
}