// second largest printing
#include<stdio.h>
int main() {
    int size;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the %d position",i);
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int secondlargest;
    if(arr[0]>arr[1])
    {
        secondlargest=arr[1];
    }
    else
    {
        secondlargest=arr[0];
        largest=arr[1];
    }
    for(int j=2;j<size;j++)
    {
        
        if(arr[j]>largest)
        {
            secondlargest=largest;
            largest=arr[j]; 
        }
        else if (arr[j] > secondlargest&& arr[j] != largest)
{
    secondlargest = arr[j];
}   
    }
    printf("second largest number :%d ",secondlargest);
}