//call by value
#include<stdio.h>
#include<conio.h>
int add(int,int);
int mul(int ,int);

int main()
{
	int a,b,c,d;
	printf("enter the two intiger:");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("\n The sum =%d",c);
	d=	mul(a,b);
	printf("\n The Multiplication is %d",d);
	getch();

	
}



int add(int p,int q)
{

 	int t;
	t=(p+q);
	return(t);
}
int mul(int m , int n)
{
	int M;
	M=m*n;
	return(M);
}