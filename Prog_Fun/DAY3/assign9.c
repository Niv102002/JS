#include<stdio.h>

#define SQUARE(n) (n*n)
#define CUBE(n) (SQUARE(n)*n)
 
int main()
{
	int n;
	printf("Enternumber : ");
	scanf("%d",&n);
	printf("Square of number %d is : %d\n",n,SQUARE(n));
	printf("Cube of number %d is : %d\n",n,CUBE(n));
	return 0;
}
