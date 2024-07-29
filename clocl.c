#include<stdio.h>
#include<conio.h>
int main()
{

int arr[5];
int i;
 int sum=0; 
float avg;
printf("enter the numbr n:");
for(i=0; i<=5;i++)
{
scanf("%d",arr[i]);
sum+=arr[i];
}

avg=sum/5;
printf("enter the arr element=%f",avg);
return 0;



}