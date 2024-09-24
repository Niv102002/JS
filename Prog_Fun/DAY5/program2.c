#include<stdio.h>

int main()
{
	int arr[3][3];
	int i,j,sum;
	
	printf("Enter values : ");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Values : \n");
	for (i=0;i<3;i++)
	{
		sum=0;
		for (j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			sum = sum+arr[i][j];
		}
		printf("--> sum - %d",sum);
		printf("\n");
	}
	
	return 0;
}
