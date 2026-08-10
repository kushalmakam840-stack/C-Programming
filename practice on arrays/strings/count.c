#include<stdio.h>
int main()
{
    char s[]="HELLO";
    int count=0;
    int i=0;
    while(s[i]!= '\0')
    {
        count++;
        i++;
    }
    printf("Length of string: %d", count);
}