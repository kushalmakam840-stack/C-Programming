\#include\<stdio.h>
int main()
{
  unsigned int x=0xb6;
  unsigned int d=0;
    d = (x>>2)& 1;
    unsigned int result=0;
    result |= d<<0;
    d = (x>>3)& 1;
    result |= d<<1;
    d = ((x>>4)& 1);
    result |= d<<2;
    printf("%x",result);
}