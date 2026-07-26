int main() {
  int temp[5];
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7,8,9,10};
int j=0;
for(int i=4;i>=0;i--)
{
      temp[i]=arr1[i];
      j++;
}
j=0;
for(int i=4;i>=0;i--)
{
      arr1[j]=arr2[i];
       j++;
} 
j=0;
for(int i=4;i>=0;i--)
{
      arr2[j]=temp[i];
       j++;
} 
for(int i=0;i<5;i++)
{
  printf("%d",arr1[i]);
  printf("%d",arr2[i]);
}


}