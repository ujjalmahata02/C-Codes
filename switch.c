#include<stdio.h>
#include<conio.h>
int main () 
{
char (ch);
int a,b,c;
printf("enter a two entiger");
scanf("%d%d%",&a,&b);
printf("\n enter the airthmatic operator +,-,*,/ to perform oprator");

ch=getchar();
switch (ch)
{ case'+':c=a+b;
printf("\n sum=%d",&c);
break;
case'-':c=a-b;
printf("\n sub=%d",&c);
break;
case'*':c=a*b;
printf("\n mult=%d",&c);
break;
case'/':c=a/b;
printf("\n devid=%d",&c);
break;
default:printf("\n you entered inviled operator");
}
return 0;



	
}



