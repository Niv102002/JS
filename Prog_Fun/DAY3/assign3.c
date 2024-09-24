#include<stdio.h>

int fact(int,int);
int main()
{
	int n,f=1;
	printf("Enter number : ");
	scanf("%d",&n);
	fact(n,f);
	return 0;
}

int fact(int n,int f)
{ 
	if (n>0)
	{
		f=f*n;
		n--;
		fact(n,f);
	}
	else
	{
		printf("Factorial = %d\n",f);
	}
}
