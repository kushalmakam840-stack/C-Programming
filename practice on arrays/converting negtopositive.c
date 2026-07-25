#include<stdio.h>
void fun(int arr[]);
void fun(int arr[])
{
  for(int i=0;i<5;i++)
  {
    if(arr[i]<0)
    {
      arr[i]=arr[i]*-1;
    }
  }
  for(int i=0;i<5;i++)
  {
    printf("%d",arr[i]);
  }
}
  
int main()
{
  int arr[5]={-1,2,-4,4,-5};
  fun(arr);
}

