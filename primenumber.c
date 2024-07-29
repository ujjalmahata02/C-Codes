#include<stdio.h>
int main()
{
    int x,i,p;
    printf("Enter a number:");
    scanf("%d",&x);
    p=x*(x-1);
    for(i=2; i<p ;i++)
    {
        if(x%i==0)
         break;
    }

    if(i==x)
        printf("%d is prime number",x);
    else
        printf("%d is not prime",x);
        
   return 0;
}