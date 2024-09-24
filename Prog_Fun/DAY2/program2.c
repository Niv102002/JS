#include<stdio.h>

void display();

int main()
{
	int num=10;
	display(num);
	printf("\nnum = %d",num);
	
	return 0;
}

void display(int num)
{ 
	printf("\nValue = %d",num);
}
