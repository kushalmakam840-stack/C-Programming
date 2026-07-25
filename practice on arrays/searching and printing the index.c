#include<stdio.h>
int fun(int n);
int fun(int n)
{
  int j;
  int arr[5]={1,2,5,6,7};
  for(int i=0;i<5;i++)
  {
    if(n==arr[i])
    {
      j=i;
      return j;
    }
  }
  return -1;
}
      
  
int main()
{
  int a;
  printf("enter the value");
  scanf("%d",&a);
  int r=fun(a);
  printf("index %d",r);
}