#include<stdio.h>
int main()
{
	char ch;
	int a,b,c;
	printf("enter two intiger:");
	scanf("%d%d",&a,&b);
	printf("\n enter an arithmatic operator +,-,*,/ to perform operator");
	ch=getchar();
	switch(ch)
	
	{ case'+':c=a+b;
	printf("\n sum=%d",c);
		break;
	case'-':c=a-b;
	printf("\n sub=%d,c");
	break;
	case'/':c=a/b;
	printf("\n division=%d",c);
	break;
	case'*':c=a*b;
	printf("\n multiply=%d",c);
	break;
	default:printf("\n you entered invild operator");
	
	
	}
	return 0;
	
	
	
}