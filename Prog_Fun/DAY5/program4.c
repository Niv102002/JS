#include<stdio.h>

void accept(int[*][3]);
void display(int[][3]);

int main()
{
	int arr[3][3];
	
	accept(arr);
	display(arr);
	
	return 0;
}
	
void accept(int (*arr)[3])
{
	int i,j;
	
	printf("Values : \n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]); //(*(arr+i)+j)
		}
	}
}
	
void display(int a[][3])
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
