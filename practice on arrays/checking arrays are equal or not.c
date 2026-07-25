#include<stdio.h>
int fun(int arr1[],int b,int arr2[],int c);
int fun(int arr1[],int b, int arr2[],int c)
{
  if(b!=c)
    return 0;
  for(int i=0;i<b;i++)
  {
  if(arr1[i]!=arr2[i])
  {
        return 0;
  }
  }
  return 1;
}


int main()
{
  int b;
  printf("enter size");
  scanf("%d",&b);
  int arr1[b];
  for (int i=0;i<b;i++)
  {
    scanf("%d",&arr1[i]);
  }
   int c;
  printf("enter size");
  scanf("%d",&c);
  int arr2[c];
  for (int i=0;i<c;i++)
  {
    scanf("%d",&arr2[i]);
  }
  if(fun(arr1,b,arr2,c))
  {
    printf("arrays r equal");
  }
  else
    printf("not equal");
}