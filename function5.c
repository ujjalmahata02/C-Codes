
//call by value
#include<stdio.h>
#include<conio.h>
int add( int,int);

void main()
{
	
	int a,b,c;
	printf("enter the two intiger:");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("\n the sum is =%d",c);
	getch();
}
int add (int p,int q)

{
	int t;
	t=p+q;
	return t;
	
}
