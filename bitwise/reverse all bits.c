#include<stdio.h>
int main()
{
    unsigned int result=0,a;
    int b;
    printf("Enter the number:");
    scanf("%u",&a);
    int j=31;
    for(int i=0;i<32;i++)
    {
        b=(a>>i)&1;
        result|=b<<j;
        j--;
    }
    printf("Reversed bits: %x",result);

}