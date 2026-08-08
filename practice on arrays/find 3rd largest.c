#include<stdio.h>
int main()
{
        int n;
        printf("enter size");
        scanf("%d",&n);
        int a[n];
        int largest,second_largest,third_largest=0;
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        if(a[0]>a[1])
        {
                largest=a[0];
                second_largest=a[1];
        }
        else
        {
                largest=a[1];
                second_largest=a[0];
        }
        int i=2;
        while(i<n)
        {
                if(a[i]>largest)
                {
                        third_largest=second_largest;
                        second_largest=largest;
                        largest=a[i];
                        
                }
                else if(a[i]>second_largest)
                {
                        third_largest=second_largest;
                        second_largest=a[i];
                }
                else
                {
                  if(a[i]>third_largest)
                  {
                    third_largest=a[i];
                  }
                }
                i++;
        }
        printf("third largest number in array is %d",third_largest);
        return 0;
}