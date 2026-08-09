#include <stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest,second_largest;
    if(arr[0]>arr[1])
    {
        largest=arr[0];
        second_largest=arr[1];
    }
    else if(arr[0]<arr[1])
    {
        largest=arr[1];
        second_largest=arr[0];
    }
    else
    {
        largest=arr[0];
        for(int i=2;i<10;i++)
        {
            if(arr[i]!=largest)
            {
                second_largest=arr[i];
                break;
            }
        }

    }
    int count=0;
    for(int i=2;i<10;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>=second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);
    return 0;
}