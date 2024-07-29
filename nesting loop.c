#include<stdio.h>
int main()
{
int raw,coln,i,j;
printf("enter the no of raw and coln");
scanf("%d%d",&raw,&coln);


for(i=1; i<=raw; i++)
{ 
for(j=1; j<=coln; j++)
{
	printf("%d ",i*j);
}
printf("\n");
}
return 0;
}