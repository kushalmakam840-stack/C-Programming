#include<stdio.h>
int main()
{
  int a[32],b;
  printf("enter number;");
  scanf("%d",&b);
  if(b==0)
  {
    printf("0");
    return 0;
  }
  int c=b;
  int j;
  for(int i=0;i<32;i++)
  {
    a[i]=c%2;
    if(c==1)
    {
      j=i;
      break;
    }
    c=c/2;  
  }
for(j;j>=0;j--)
{
  printf("%d",a[j]);
}
}