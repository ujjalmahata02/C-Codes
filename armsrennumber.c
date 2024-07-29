#include<stdio.h>
void main()
{
	int r,n,x,s;
	printf("amstrong number below 2000 are :\n");
	for(n=1;n<2000;n++)
{
		s=0;
		
		while(n!=0)
{
   r=n%10;
		
		
		s=s+pow(r,3);
		n=n/10;
		
	}
	if(s==n)
	printf("%d \n",n);
}
getch();
}