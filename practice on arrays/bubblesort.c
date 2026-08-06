// second largest printing
#include<stdio.h>
int main() {
    int size;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<size;i++)
    {
    for(int j=0;j<size-1;j++)
    {
      if(arr[j]>arr[j + 1])
      {
        temp=arr[j + 1];
        arr[j + 1]=arr[j];
        arr[j]=temp;
      }
    }
    }
    for(int i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
    }
      
}
      