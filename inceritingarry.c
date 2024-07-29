#include<stdio.h>
#define max_size 100
int main()
{
	int arr[max_size],i,size,num,pos;
	printf("input the size of arry");
	scanf("%d",&size);
	printf("\n input element");
	for(i=0; i<size; i++)
{
	scanf("%d",&arr[i]);
}
	printf("\n innput element and position to insert");
	scanf("%d%d",&num,&pos);
	if(pos>size+1||pos<0)
{
    printf("\n invild position plese enter position between 0&%d",size);	
    }
    else
    {for(i=size; i>=pos;i--)
    {
     arr[i]=arr[i-1];
    }
     arr[pos-1]=num;
    size++;
for(i=0; i<size; i++)
printf("%d",arr[i]);
}
return 0;
}