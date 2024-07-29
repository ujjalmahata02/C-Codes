#include<stdio.h>

void swapp(int*,int*);
void main()
{
	int x=10,y=15;
	printf("value before swappx=%dand y=%d",x,y);
	swapp(&x,&y);
	printf("\n after swap x=%d y=%d",x,y);
	getch();
}
void swapp(int*a,int*b)

{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}

