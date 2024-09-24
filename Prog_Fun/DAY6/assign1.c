#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row,col,i,j,**arr;
	int *sum;
	
	
	printf("\nEnter count of number(Row) and Digit count (column) :: ");
	scanf("%d %d",&row,&col);
	
	sum=(int*)malloc(row*sizeof(int));
	
	arr=(int**)malloc(row*sizeof(int*));
	
	for(i=0;i<row;i++)
	{
		arr[i]=(int*)malloc(col*sizeof(int));
	}
	
	printf("\nEnter %d Elements :: \n",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nElements :: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			sum[i]+= arr[i][j];
		}
	}
	
	printf("Sum of individual digits is ");
	for(j=0;j<col;j++)
	{
		printf("%d",sum[i]);
	}
	
	for(i=0;i<row;i++)
	{
		free(arr[i]);
	}
	free(arr);
	
	free(sum);
	
	return 0;
}
