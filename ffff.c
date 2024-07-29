#include<stdio.h>
#include<conio.h>
int main()
//lcm
{
	int a,b,i,l;
	printf("enter the two intiger");
	scanf("%d%d",&a,&b);
	for(i=a<b?a:b; i>=1; i--)
	
	{
	if(a%i==0 && b%i==0)
	break;
}
	printf("\n hcf is %d",i);
	
	return 0;
	
}