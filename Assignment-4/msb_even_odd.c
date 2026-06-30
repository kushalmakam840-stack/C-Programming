#include<stdio.h>
int main(){
    int i;
    int count=0;
    printf("enter the value:");
    scanf("%d",&i);
    int j=i;
    loop1:if(i>0){ 
        count =count+1;
        i=i/10;
        goto loop1;
    }
    int k=1;
    int value=1;
    loop2:if(k<count){
        value=value*10;
        k=k+1;
        goto loop2;
    }
    if(j%10%2==0){
        printf("%d",j);
    }
    else{
        printf("%d",j-value);
    }
}