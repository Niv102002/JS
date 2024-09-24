#include<stdio.h>

int main()
{
	int number=2,count=20,flag;
	printf("First 20 prime numbers : \n");

	while(count>0)
	{
		flag=0;
		for(int i=2;i<number;i++)
		{
			if (number%i==0)
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
		printf("%d  ",number);
		count--;
		}
		number++;
	}
	return 0;
}
