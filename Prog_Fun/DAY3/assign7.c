#include<stdio.h>

#define MAX(n1,n2,n3) n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3)

int main()
{
	int n1,n2,n3;
	printf("Enter three numbers to compare: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("Maximum number is : %d\n",MAX(n1,n2,n3));
	return 0;
}
