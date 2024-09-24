#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row=3,col,i,j;
	int *arr[row];
	
	printf("\nEnter column size::");
	scanf("%d",&col);
	
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
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<row;i++)
	{
		free(arr[i]);
	}
	return 0;
}
