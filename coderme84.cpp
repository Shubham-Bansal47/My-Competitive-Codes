#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,max1;
    cin>>a;
    cin>>b; 
    cin>>c;
    int arr[6];
    arr[0]=a*b*c;
    arr[1]=a+b+c;
    arr[2]=a*b+c;
    arr[3]=a+b*c;
    arr[4]=a*(b+c);
    arr[5]=(a+b)*c;
    max1=arr[0];
    for(i=0; i<6; i++)
    {
              if(max1<=arr[i])
              {
                        max1=arr[i];
              }
    }
    cout<<max1;
    
    return 0;
}