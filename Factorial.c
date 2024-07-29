#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter the interger you want to calculate:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("The Factorial of %d is %d",n,f);
	
	getch();
}
int fact(int a)
{
	if(a==0||a==1)
	{
		return (1);
		
	}
	else
	{
	return(a*fact(a-1));
	}
	
}