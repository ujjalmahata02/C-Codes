#include<stdio.h>
#include<conio.h>
int main ()
{
int i,j,A[10][10],B[10][10],r1,r2,c1,c2,c[10][10];	
printf("enter size of row &colon of a matrix A");
scanf("%d%d",&r1,&c1);
printf("size of matrix B coln");
scanf("%d%d",&r2,&c2);
if(r1==r2&&c1==c2)
{
	for(i=0; i<r1; i++)
 	{
	for(j=0; j<c1; j++)	
	{
	scanf("%d",&A[i][j]);															 				 											

	}
    }
    	for(i=0; i<r2; i++)
 	{
	for(j=0; j<c2; j++)	
	{
	scanf("%d",&B[i][j]);															 				 											

	}
    
    }
printf(" addition of A&B\n");
for(i=0; i<r1; i++)
{
for(j=0; j<c1; j++)
{
c[i][j]=A[i][j]+B[i][j];
printf("%d \t",c[i][j]);
}
printf("\n");
}
}
return 0;
}