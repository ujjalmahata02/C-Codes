#include<stdio.h>
int main()
{
	int n, fact=1, i;
	
	printf("\n enter the posative number ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{ 
	 fact=fact*i;
	}
	printf("\n the fractional number=%d",fact);
	return 0;
	
}