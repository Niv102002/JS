#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size,*arr,i,new_size;
	
	printf("\nEnter size::");
	scanf("%d",&size);
	
	arr=(int*)malloc(size*sizeof(int));
	
	printf("\nEnter Elements :: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nElements :: \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("\nEnter new size :: \n");
	scanf("%d",&new_size);
	
	arr = (int*)realloc(arr,(size+new_size)*sizeof(int));
	
	printf("\nEnter Elements :: \n");
	for(i=size;i<size+new_size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nElements :: \n");
	for(i=0;i<size+new_size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	free(arr);
	 
}
