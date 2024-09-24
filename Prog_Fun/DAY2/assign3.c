#include<stdio.h>

int prime();

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Is prime or not = ");
	printf("%c\n",(prime(num)));
	
	return 0;
}

int prime(int num)
{ 
	int flag = 0;
	for(int i=2;i<num;i++)
	{
		if (num%i==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if (flag==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
