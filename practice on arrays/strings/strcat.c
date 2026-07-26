#include<stdio.h>
void strcat1(char s[],char d[])
{
  int i=0,count=0;
  while(d[i]!='\0')
  {
    count++;
    i++;
  }
  i=0;
  while(s[i]!='\0')
  {
   d[count+i]=s[i];
   i++;
  }
  d[count+i]='\0';
  printf("%s",d);
}
    

int main() {
char d[20]="kernel";
char s[]="masters";
strcat1(s,d);

  return 0;
}