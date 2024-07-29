#include<stdio.h>
int main()
{
int i,arr[8],max;
printf("enter the arry element");
for(i=0;i<=8;i++)
scanf("%d",&arr[i]);
max=arr[0];
for(i=0; i<=8; i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
printf("\n the largest number=%d",max);
return 0;
}