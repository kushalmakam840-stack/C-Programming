#include<stdio.h>
float average(int arr[],int s)
{
  int sum=0;
    for(int i=0;i<s;i++)
  {
    sum=sum+arr[i];
  }
  return (float)sum/s;  
}
int main()
{
  int n,s;
  printf("enter no of students");
  scanf("%d",&n);
  printf("enter no of subjects");
  scanf("%d",&s);
  int arr[s];
  for(int i=0;i<s;i++)
  {
    printf("enter subject marks");
    scanf("%d",&arr[i]);
  }
  float r=average(arr,s);
  printf("%f",r);
}