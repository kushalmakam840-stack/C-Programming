#include <stdio.h>

int main()
{
    int x,i=2;
    printf("enter the number :");
    scanf("%d",&x);
    loop:if(i<x){
        if(x%i!=0){
            i=i+1;
            goto loop;
        }
        printf("Not prime number");
        goto end;    
        
    }
    printf("prime number:");
    end:
        return 0;
}
