#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,des,real,img;
	printf("print the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	des=b*b-4*a*c;
	if(des==0)
	{
		printf("root are real and equal");
		
		x1=-b/(2*a);
		printf("\n root x1=%f",x1);
	}
   else	if(des>0);
		{
		printf("\n root are real and distinect");
		x1=-b/(2*a)+sqrt(des)/2*a;
		x1=-b/(2*a)-sqrt(des)/2*a;
		
		printf("\n root are x1=%f&x2=%f",x1,x2);
	}
	
		{
			printf("\n the root are imaganary&distnect");
			real=-b/2*a;
			img=sqrt(4*a*c-b*b)/2*a;
			printf("\n root x1=%f+j%f",real,img);
			printf("\n root x2=%f-j%f",real,img);
			return 0;
			
		}
		
		
		
		
	
}