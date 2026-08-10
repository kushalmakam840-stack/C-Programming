#include<stdio.h>
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);
    char s[n+1];
    printf("enter string");
    scanf("%s",s);
    char p[n+1];
    int i=0;
    int count1=0;
    while(s[i]!= '\0')
    {
        i++;
        count1++;
    }
    int j=count1-1;
    i=0;
    while(j>=0)
    {
        p[i]=s[j];
        j--;
        i++;
    }
    p[count1]='\0';
    i=0;    
    int count=0;
    while(s[i]!= '\0')
    {
        if(s[i]==p[i])
        {
            count++;
            i++;
        }
        else
        {
            break;
        }

    }
    if(count==count1)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}


    
