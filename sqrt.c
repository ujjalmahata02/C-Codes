#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float x1,x2,des,real,img;
printf("enter a three entiger");
scanf("%d,%d,%d",&a,&b,&c);
des=b*b-4*a*c;

if	(des==0)
{ 
printf("the rots are real and equal");
x1=-b/(2*a);
printf("\n roots x1=%f",x1);
}
else
if (des>0)
{
printf("the rots are real & disnect");
x1=-b/(2*a)+sqrt(des)/2*a;
x2=-b/(2*a)-sqrt(des)/2*a;
printf("\n roots are x1=%f &x2=%f",x1,x2);
}
else
{ 
printf("the roots are imagnary and distinct");
real=-b/(2*a);
img=sqrt(4*a*c-b*b)/2*a;
printf("\n root x1=%f+j%f",real,img);
printf("\n root x1=%f-j%f",real,img);
}
return 0;

}

	