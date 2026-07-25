#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,25,7,8,0,10};
    int temp=arr[0];
    int high,low;
    int j=0;
    for (int i=1;i<10;i++)
    {
      if(arr[i]>temp)
      {
        temp=arr[i];
              j=i;
      }

      }
      int l=0;
      int temp1=arr[0];
    for (int i=1;i<10;i++)
    {
      if(arr[i]<temp1)
      {
        temp1=arr[i];
        l=i;
      }
    }
    printf("%d largest with index %d",temp,j);
    printf("%d lowest with index %d",temp1,l);
    
}