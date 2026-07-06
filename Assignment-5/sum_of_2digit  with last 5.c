#include <stdio.h>

int main()
{
    int i,sum=0;
    for(int i=10;i<=99;i++)
    {
        if(i%10==5)
        {
            sum=sum+i;
        }
    }
     printf("%d\n",sum);
    return 0;