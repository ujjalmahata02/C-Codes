#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf(" enter the pkosative number :");
	scanf("%d",&n);
	do
	{
		r=n/10;
		sum=sum+r;
		
	
	} while(n!=0);

	printf("sum is \n sum i=%d",sum);
	return 0;
}