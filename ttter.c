#include<stdio.h>
int main ()
{
	int arr[10],i,n,sum=0;
	float avg;
	printf("enter the number of intiger");
	scanf("%d",&n);

		printf("enter the elements");
	for(i=0;i<n;i++)
	
	{
			scanf("%d",&arr[i]);
		sum +=arr[i];
	}
		avg =(float)sum/n;
		printf("average=%f",avg);
		return 0;
		
	}
