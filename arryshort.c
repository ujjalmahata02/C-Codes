#include<stdio.h>

int main()
{
   int sort[20];
   int i,j,temp;
   int n;
   int call[20];
   printf("Enter How many numbers you want to Sort:");
   scanf("%d",&n);
   printf("Enter The Numbers you want to sort:");
  for(i=0;i<n;i++)
{
       scanf("%d",&sort[i]);
}
        for(i=0;i<n;i++)
{
       for(j=i+1;j<n;j++)

{
	    if(sort[i]>sort[j])
{
               temp=sort[i];
               sort[i]=sort[j];
               sort[j]=temp;
 }
}
}
   //for printing
   printf("The numbers in sorted form are:");
    for(i=0;i<n;i++)
 {
        printf("%d \t",sort[i]);
}
  getch();
}