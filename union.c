#include<stdio.h>
struct code
{
int i;
int null;
char c;
struct code *ptr;	
};
int main()
{
int null;
struct code var1;	
struct code var2;	
var1.i=65;
var1.c='A';
var1.ptr=null;
printf("  %d%c%d",var1.i,var1.c,var1.ptr);
var2.i=66;
var2.c='B';
var2.ptr=null;
var1.ptr=&null;
printf(" \n \t %d%c%d",var2.i,var2.c,var2.ptr);
printf(" \n \t %d%c",var1.ptr->i,var2.ptr->c,var2.ptr);
return 0;
}