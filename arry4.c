// wap to find largest numer of arry
#include<stdio.h>
#include<conio.h>

int mian()
{
int arr[8],max,i;
printf("enter the arry element");
for(i=0; i<=8; i++)
{
scanf("%d",&arr[i]);}
max=arr[0];
for(i=0; i<=8; i++);
{
if(arr[i]>max)
{
max=arr[i];	}
}
printf("\n the largest number=%d",max);
return 0;
}