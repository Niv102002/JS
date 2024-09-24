#include<stdio.h>

int square();
int cube();

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("square = %d\n",square(num));
	printf("cube = %d",cube(num));
	
	return 0;
}

int square(int num)
{ 
	return num*num;
}

int cube(int num)
{ 
	return num*num*num;
}

