#include <bits/stdc++.h>
using namespace std;
int main()
{
          long long int n;
          cin>>n;
          long long int arr[n],max1,x=0;
          vector<long long int> vec;
          for(long long int i=0; i<n; i++)
                    cin>>arr[i];
                    
          long long int sum1=arr[0],sum2=0,sum3=arr[n-1],l=0,r=n-1;
          while(l<r)
          {
                    if(sum1>sum3)
                    {
                              --r;
                              sum3=sum3+arr[r];
                    }
                    else if(sum1<sum3)
                    {
                              ++l;
                              sum1=sum1+arr[l];
                    }
                    else
                    {
                              vec.push_back(sum1);
                              ++l;
                              sum1=sum1+arr[l];
                              ++x;
                    }
                    
          }
          if(x>0)
                    cout<<vec[vec.size()-1];
          else
                    cout<<0;
                    
          return 0;
}