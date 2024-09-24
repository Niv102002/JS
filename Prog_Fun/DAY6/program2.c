#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size,*arr,i;
	
	printf("\nEnter size::");
	scanf("%d",&size);
	
	arr=(int*)malloc(size*sizeof(int));
	
	/*printf("\nEnter Elements :: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}*/
	
	printf("\nElements :: \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
	free(arr);
	 
}
