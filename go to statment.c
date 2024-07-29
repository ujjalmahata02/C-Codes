#include<stdio.h>
int main ()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n/2==0)
{

	goto even;
}
	else
{

	goto odd;
		
}
even:printf("\n the number %d is even",n);
odd:printf("\n the number %d is odd",n);
return 0;



}