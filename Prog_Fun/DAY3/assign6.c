#include<stdio.h>

#define MAX(n1,n2) n1>n2?n1:n2

int main()
{
	int n1,n2;
	printf("Enter two numbers to compare: ");
	scanf("%d %d",&n1,&n2);
	printf("Maximum number is : %d\n",MAX(n1,n2));
	return 0;
}
