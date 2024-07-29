#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n,sum=0;
	float avg;
	printf("Enter the 10 intiger");
	for(i=0;i<10;i++)
	{ 
		scanf("%d",&arr[i]);

		sum +=arr[i];

	}
	avg=sum/10;
	printf("average=%f",avg);
	return 0;
	
	
}