#include<bits/stdc++.h>
using namespace std;
int check(int n,int y)
{
    int i,count=0,z=0,count2=0,x=0;
     down:
     for(i=1; i<=5; i++)
                        {
                            z++;
                            if(z!=5)
                            {
                                x++;
                                if(x==1)
                                {
                                    count2++;
                                }
                                else if(x==n+1)
                                {
                                    x=0;
                                    goto down;
                                }
                            }
                            else if(z==5)
                            {
                                if((++x)==1)
                                {
                                    count2++;
                                    cout<<(5-count2);
                                    return 0;
                                }
                                else if((++x)!=1)
                                {
                                    cout<<(5-count2);
                                    return 0;
                                }
                            }
                        }
}
int main()
{
          int i,n,x,y,z=0,arr[110],count=0,count1=0,count2=0;
          cin>>n;
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];                   
                    count+=arr[i];                     
          }
          if(count%(n+1)==0)
          {
                    x=n+1;
          }
          else
          {
                    x=count%(n+1);
          }
          y=x;
          if(n+1-x>=5)
          {                                 // 1 2 3 4 5  
                    cout<<5;                //   |   
          }
          else if(n+1-x<5)                  // y=2      
          {
                   
                    if(y!=n+1)
                    {
                        up:
                        for(i=1; i<=5; i++)
                        {
                            z++;
                            if(z!=5)
                            {
                                x++;
                                if(x==1)
                                {
                                    count2++;
                                }
                                else if(x==n+1)
                                {
                                    x=0;
                                    goto up;
                                }
                            }
                            else if(z==5)
                            {
                                if((++x)==1)
                                {
                                    count2++;
                                    cout<<5-count2;
                                    return 0;
                                }
                                else if((++x)!=1)
                                {
                                    cout<<5-count2;
                                    return 0;
                                }    
                            }
                        }
                    }    
                    else if(y==n+1)
                    {
                       check(n,y);
                    }
           }
          return 0;
}