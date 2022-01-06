#include <iostream>

using namespace std;

int main()
{
    int i,n,a,b,count=0;                         // 1 2 3 4 5 6 7
    cin>>n>>a>>b;                               //        4 3                                            // 1 2 3 4 5 6 
    if(n+1-b>a)
    {
        for(i=n-b+1; i<=n; i++)                  //         5
        {                                             
            count++;                             // 1 2 3 4 5 6 7 8 9
        }                                        //       4     3
    }
    else if(n+1-b<=a)
    {
        for(i=a+1; i<=n; i++)
        {
            count++;
        }
    }
    if(n>(a+b))
    {
        count++;
    }
    cout<<count;
    return 0;
}