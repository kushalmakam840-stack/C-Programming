#include <stdio.h>

int main()
{
unsigned int a=0;
int age;
printf("enter the age:");
scanf("%d",&age);
if(age<0 || age>63)
{
  printf("inValid");
  return 1;
}
a|=age;
int departid;
printf("enter the department:");
scanf("%d",&departid);
if(departid<0 || departid>31)
{
  printf("inValid");
  return 1;
}
a|=departid<<6;
int exp;
printf("enter the exp");
scanf("%d",&exp);
if(exp<0 || exp>63)
{
  printf("inValid");
  return 1;
}
a|=(exp<<11);
int gender;
printf("enter the gender:");
scanf("%d",&gender);
if(gender<0 || gender>1)
{
  printf("inValid");
  return 1;
}
a|=(gender<<17);
int salary;
printf("enter the salary:");
scanf("%d",&salary);
if(salary<0 || salary>255)
{
  printf("inValid");
  return 1;
}
a|=(salary<<18);
int shift;
printf("enter the shift:");
scanf("%d",&shift);
if(shift<0 || shift>3)
{
  printf("inValid");
  return 1;
}
a|=(shift<<26);
printf("%d",(a>>0) & 0x3f);
printf("%d",(a>>6)  & 0x1f);
printf("%d",(a>>11)  & 0x3f);
printf("%d",(a>>17 ) & 0x01);
printf("%d",(a>>18)  & 0xff);
printf("%d",(a>>26)  & 0x03);
}



