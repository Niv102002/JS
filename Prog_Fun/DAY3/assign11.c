#include<stdio.h>

#define MUL(n1,n2) n1*n2

int main()
{
	
	int n1,n2;
	printf("Enter two numbers to for multiplication : ");
	scanf("%d %d",&n1,&n2);
	printf("Addition of given 2 numbers is : %d\n",MUL(n1,n2));
	return 0;
}
