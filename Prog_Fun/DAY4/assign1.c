#include <stdio.h>

void mul(int [],int);
void display (int []);

int main()
{
	int num, table[11];
	printf("Enter number : ");
	scanf("%d",&num);
	printf("Multiplication table of number %d is ",num);
	mul(table,num);
	display (table);
	return 0;
}

void mul(int table[],int num)
{
	for (int i=0;i<=11;i++)
	{
		table[i]=num*(i+1);
	}
}

void display (int table[])
{
	for (int i=0;i<10;i++)
	{
		printf("%d ",table[i]);
	}
}
