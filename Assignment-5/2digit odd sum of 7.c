#include <stdio.h>

int main()
{
    int j;
    for(int i=10;i<=100;i++)
     if(i%2!=0)
     {
         j=i%10+i/10;
         if(j==7)
         {
             printf("%d\n",i);
         }
     }
    return 0;
}