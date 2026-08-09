#include<stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int count=0;
    int temp;
    int i;
    for(i=0;i<10;i++)
    {
          int k=i-1,s=1;
    while(k>=0)
    {
        if(a[k]==a[i])
        {
            s=0;
            break;
        }
        k--;
    }
    if(s==0)
    {continue;}
    count=1;
    for(int j=i+1;j<10;j++)
    {
        if(a[i]==a[j])
        {
            temp=a[i];
            count++;
        }  
    }
    
        printf("The number %d is repeated %d times\n",temp,count);
  
    }
}