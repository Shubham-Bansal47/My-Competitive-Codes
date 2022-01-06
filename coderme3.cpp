#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char s[200];
    scanf("%s",s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u' || s[i]=='Y' || s[i]=='y')
        {}
        else
        {
            printf(".");
            printf("%c",tolower(s[i]));
        }
    }
    
    return 0;
}