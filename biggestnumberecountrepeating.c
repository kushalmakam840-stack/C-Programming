#include<stdio.h>
int fun(int arr[],int a);
int fun(int arr[],int a)
{
  int count=0;
  int temp=arr[0];
  for(int i=0;i<a;i++)
  {
    if(arr[i]>temp)
    {
      temp=arr[i];
    }
  }
  for(int i=0;i<a;i++)
  {
    if(temp==arr[i])
        count++;
  }
  return count;
}
    
int main()
{
  int a;
  printf("enter the size");
  scanf("%d",&a);
  int arr[a];
  for(int i=0;i<a;i++)
  {
    scanf("%d",&arr[i]);
  }
  int r =fun(arr,a);
  printf("biggest number repeated %d",r);
}
