#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row,col,i,j,**arr;
	
	printf("\nEnter row and column size::");
	scanf("%d %d",&row,&col);
	
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
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<row;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
