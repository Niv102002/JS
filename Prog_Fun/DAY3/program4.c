#include<stdio.h>

#define SUB(n1,n2) n1-n2

int main()
{
	int sub,sub2;
	//printf("PI = %f\n",PI);
	sub = SUB(6,2);
	sub2 = SUB(3,8);
	printf("subtraction = %d\n",sub);
	printf("subtraction 2 = %d\n",sub2);
	return 0;
}
