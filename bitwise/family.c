#include <stdio.h>

int main()
{
unsigned int a=0;
int age1=12;
a=a|age1;
int age2=40;
a=a|(age2<<6);
int age3=30;
a=a|(age3<<12);
int age4=48;
a=a|(age4<<18);
int age5=38;
a=a|(age5<<24);
printf("%d",a>>0 & 0x3f);
printf("%d",a>>6  & 0x3f);
printf("%d",a>>12  & 0x3f);
printf("%d",a>>18  & 0x3f);
printf("%d",a>>24  & 0x3f);
}



