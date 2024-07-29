#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,des;
	float r,R,real,img;
	printf("Enter the values of a,b,c of a quadratic equation:\n");
	scanf("%d%d%d",&a,&b,&c);
	des=pow(b,2)-4*a*c;
	if(des==0)
	{
		printf("The roots of quadratic equation are Real and Equal");
		r=-b/(2*a);
		printf("The Roots are :\t R1=R2=%d",r);
		
	}
	else if(des>0)
	{
		printf("The roots are real and Unqual");
		r=(-b/(2*a)) + sqrt(des)/(2*a);
		R=(-b/(2*a)) - sqrt(des)/(2*a);	
		printf("The Roots are :\t R1=%d \t R2=%d",r,R);	
	}
	else
	{
		printf("The roots are Imaginary and Unqual");	
		real=-b/(2*a);
		img=sqrt(4*a*c-(b*b))/(2*a);
		printf("The First root is \t %f+%fi \n",real,img);
		printf("The Second root is \t %f-%fi",real,img);
		
	}
	return 0;
}