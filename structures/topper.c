#include<stdio.h>
#define N 5
struct stu{
        int subject[6];
        int id[20];
};

int main()
{
struct stu s[N];
//struct stu *p=&s;
for(int i=0;i<N;i++)
{
        printf("enter the %d marks:\n",i+1);
        for(int j=0;j<6;j++)
        {
                printf("The %d student is subject %d \n",i+1,j+1);
                scanf("%d",&s[i].subject[j]);
        }


}

int marks=0;
int topper=0;
int student=-1;
int other=-1;
for(int i=0;i<N;i++)
{
        for(int j=0;j<6;j++)
        {
                 marks+=s[i].subject[j];
        }
        if(marks>topper)
        {
                topper=marks;
                student=i+1;
                other=-1;
        }
        else if(marks==topper)
        {
                other=i+1;
        }
marks=0;
}
if(other!=-1)
{
        printf("Both are toppers student %d and student %d",student,other);
}
else
{
printf("Topper student is %d with marks %d",student,topper);
}
}
