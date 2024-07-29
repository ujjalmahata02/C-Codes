//printing intiger a real number
#include<stdio.h>
void main()
{
	int a=123345;
	float b=678.90;
	printf("1.value of a=%d",a);
	printf("\n case 2, value of a=%10d",a);
	printf("\n case 3,value of a=%-10d",a);
	printf("\n case 4,value of a=%012d",a);
	printf("\n case 5,value of b=%f",b);
	printf("\n case 6,value of b=%015.2f",b);
	printf("\n case 7,value of a=%015.3f",b);
	printf("\n case 8,value of a=%-16.3",b);
	
	getch();
	
}