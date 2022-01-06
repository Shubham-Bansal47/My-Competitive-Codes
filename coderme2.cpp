#include<stdio.h>
#include<string.h>
 
int main()
{
    int n,i;
    char s[100][200];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0; i<n; i++)
    {
        if(strlen(s[i])>10)
        {
            printf("%c",s[i][0]);
            printf("%d",(strlen(s[i])-2));
            printf("%c",s[i][strlen(s[i])-1]);
            printf("\n");
        }
        else if(strlen(s[i])<=10)
        {
            printf("%s",s[i]);
            printf("\n");
        }
    }    
    return 0;
}