#include<stdio.h>
int main()
{
    unsigned int result=0,a;
    int b;
    printf("Enter the number:");
    scanf("%u",&a);
    int c;
    for(int i=0;i<32;i++)
    {
        if(a& (0x01<<i))
            c=i;
    }
    int e=c;
    for(int d=0;d<=c;d++)
    {
        b=(a>>d)&1;
        result|=b<<e;
        e--;
    }
    printf("Reversed bits: %x",result);

}