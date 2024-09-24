#include<stdio.h>

int addition();

int main()
{
	int num1=20,num2=30,sum;
	sum = addition(num1,num2);
	printf("Addition = %d",sum);
	
	return 0;
}

int addition(int a,int b)
{ 
	return (a+b);
}

