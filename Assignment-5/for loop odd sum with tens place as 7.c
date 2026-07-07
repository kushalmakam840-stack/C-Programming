#include <stdio.h>

int main()
{
    int i,sum=0;
    for(int i=10;i<=100;i++)
     if(i%2!=0)
     {
         if(i/10==7){
            sum=sum+i;
         }
             
             }
             printf("%d\n",sum);
    return 0;
}