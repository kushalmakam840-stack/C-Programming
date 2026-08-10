#include<stdio.h>
int main()
{
    unsigned int x=0xb6;
    unsigned int d=0;
    d =x>>2 & 0x0f;
    printf("%x",d);
}