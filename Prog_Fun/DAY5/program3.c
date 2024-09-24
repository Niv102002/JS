#include<stdio.h>

void display(int[][3],int);

int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int i,j,sum;
	
	display(arr,3);
	
	return 0;
}
	
void display(int a[][3],int row)
{
	int i,j;
	
	printf("Values : \n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
}
