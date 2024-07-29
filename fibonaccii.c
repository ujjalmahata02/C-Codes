#include<stdio.h>

// wap to print fiboncii series
int fibonacii(n);
{

int if (n==1)
return 0;
else if (n==2)
return 1;
else
return(fibonacii(n-1)+fibonacii(n-2));

}
void main()
{
	int x,y,i;
printf("how many term in series");
scanf("%d",&x);
for(i=0; i<=x; i++);
{ y=fibonacii(i);
printf("%d \t",y);
}
getch ();
}