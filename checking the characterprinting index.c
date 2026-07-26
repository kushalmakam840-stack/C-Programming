#include<stdio.h>
int finding(char a)
{
  char b[20]="kushalmakam";
  int i=0;
  while(b[i]!='\0')
  {
    if(b[i]==a)
          return i;
    i++;
  }
  return -1;
}
int main()
{
  char a;
  printf("enter the charcter");
  scanf("%c",&a);
  int r=finding(a);
  printf("index of the char:%d",r);
}