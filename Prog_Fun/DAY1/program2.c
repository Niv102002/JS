#include<stdio.h>

int main()
{
	int num, square,cube;
	printf("Enter number: ");
	scanf("%d", &num);
	
	square =  num*num;
	cube =  num*num*num;
	printf("The square is %d and cube is %d ",square,cube);

	return 0;
}
