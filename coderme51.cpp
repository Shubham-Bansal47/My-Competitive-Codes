#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
    cin >> s;
    int a=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='1')
        {
            if (s[i+1]=='4')
            {
                if (s[i+2]=='4')
                {
                    s[i]='0';
                    s[i+1]='0';
                    s[i+2]='0';
                    i=i+2;
                    ++a;
                }
                else
                {
                    s[i]='0';
                    s[i+1]='0';
                    ++i;
                    ++a;
                }
            }
            else
            {
                s[i]='0';
                ++a;
            } 
        }
        if (a!=1)
        {
            printf("NO");
            return 0;
        }
    a=0;
    }
    printf("YES");
    return 0;
}