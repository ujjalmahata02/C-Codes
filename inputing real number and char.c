//inputing number and charactor
#include <stdio.h>
void main()
{ 
float a,b;
double x,y;
long double g,h;
char ch;

printf("enter the value of a&b,");
scanf("%f%e",&a,&b);
printf("value of a=%f%e",&a,&b);
printf("value of a=%f and value of b=%e");


printf("\n enter the value of  x,y,g,h");
scanf("%lf%Lf%ef",&x,&y,&g,&h);
printf("value of x,y,g and h are=%x,%y%g%h");

printf("enter the char:");
printf("%c",&ch);
getch();
}