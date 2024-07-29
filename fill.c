#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
	int a,b,sum;
	printf
	("enter the two intiger:");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("\n sum=%d",sum);
	return 0;
}
	int add(int p,int q)
	{ int t;
	t=p+q;
	return t;
	}
	
	
