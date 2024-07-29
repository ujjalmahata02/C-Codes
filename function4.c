#include<stdio.h>
float add(int p,int q)
{
	float s;
	s=p+q;
	return s;
}
	void main()
	
	
	{
	int a;
	float b,sum;
	
    printf( "enter the value of a&b");
		 
	 scanf("%d%f",&a,&b);
	 
	 sum =add(a,b);
	 printf("\n sum=%f",sum);
	 getch();
	 
	}