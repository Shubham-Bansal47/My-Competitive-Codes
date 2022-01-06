#include <bits/stdc++.h>
#define ll long long int
#define loop(x,y) for(ll i=x; i<y; i++)
using namespace std;
 
int main()
{
    ll i,j,n,x,y;
    cin>>n;
    ll arr[n];
    vector<ll> vec,vec1;
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
              vec.push_back(arr[i]);
              vec1.push_back(arr[i]);
    }
    sort(vec1.begin(),vec1.end());
    if(n==1)
    {
              cout<<"yes"<<endl;
              cout<<1<<" "<<1;
              return 0;
    }
    else 
    {
              if(vec==vec1)
              {
                        cout<<"yes"<<endl;
                        cout<<1<<" "<<1;
                        return 0;
              }
              reverse(vec.begin(),vec.end());
              if(vec==vec1)
              {
                        cout<<"yes"<<endl;
                        cout<<1<<" "<<n;
                        return 0;
              }
              reverse(vec.begin(),vec.end());
              if(vec[0]>vec[1])
              {
                        for(i=0; i<n-1; i++)
                        {
                                  if(vec[i]<vec[i+1])
                                  {
                                            x=i+1;
                                            break;
                                  }
                        }
                        reverse(vec.begin(),vec.begin()+x);
                        if(vec==vec1)
                        {
                                  cout<<"yes"<<endl;
                                  cout<<1<<" "<<x;
                                  return 0;
                        }
                        else 
                        {
                                  cout<<"no";
                                  return 0;
                        }
              }
              else if(vec[0]<vec[1])
              {
                        for(i=0; i<n-1; i++)
                        {
                                  if(vec[i]>vec[i+1])
                                  {
                                            x=i;
                                            break;
                                  }
                        }
                        y=n;
                        for(i=x; i<n-1; i++)
                        {
                                  if(vec[i]<vec[i+1])
                                  {
                                            y=i+1;
                                            break;
                                  }
                        }
                        reverse(vec.begin()+x,vec.begin()+y);
                        if(vec==vec1)
                        {
                                  cout<<"yes"<<endl;
                                  cout<<x+1<<" "<<y;
                                  return 0;
                        }
                        else
                        {
                                  cout<<"no";
                                  return 0;
                        }
              }
              else
              {
                        for(i=0; i<n-1; i++)
                        {
                                  if(vec[i]!=vec[i+1])
                                  {
                                            x=i+1;
                                            break;
                                  }
                        }
                        if(vec[x-1]<vec[x])
                        {
                                  for(i=0; i<n-1; i++)
                                  {
                                        if(vec[i]>vec[i+1])
                                        {
                                                     x=i;
                                                     break;
                                        }
                                  }
                              y=n;
                              for(i=x; i<n-1; i++)
                              {
                                  if(vec[i]<vec[i+1])
                                  {
                                            y=i+1;
                                            break;
                                  }
                              }
                              reverse(vec.begin()+x,vec.begin()+y);
                              if(vec==vec1)
                              {
                                  cout<<"yes"<<endl;
                                  cout<<x+1<<" "<<y;
                                  return 0;
                              }
                              else
                              {
                                  cout<<"no";
                                  return 0;
                              }
                        }
                        else 
                        {
                                  for(i=0; i<n-1; i++)
                                  {
                                        if(vec[i]<vec[i+1])
                                        {
                                            x=i+1;
                                            break;
                                        }
                                  }
                                  reverse(vec.begin(),vec.begin()+x);
                                  if(vec==vec1)
                                  {
                                        cout<<"yes"<<endl;
                                        cout<<1<<" "<<x;
                                        return 0;
                                  }
                                  else 
                                  {
                                        cout<<"no";
                                        return 0;
                                  } 
                        }
              }
    }
    
    
    return 0;
}