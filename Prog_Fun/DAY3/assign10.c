#include<stdio.h>

#define SUM(n1,n2) n1+n2

int main()
{
	int n1,n2;
	printf("Enter two numbers to for addition : ");
	scanf("%d %d",&n1,&n2);
	printf("Addition of given 2 numbers is : %d\n",SUM(n1,n2));
	return 0;
}
