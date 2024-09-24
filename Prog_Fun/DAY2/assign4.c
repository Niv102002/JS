#include<stdio.h>

int armstrong(int);

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Is armstrong number or not = ");
	printf("%c\n",(armstrong(num)));
	
	return 0;
}

int armstrong(int num)
{
	int temp = num;
	int temp2 = num;
	int remainder,final_sum;
	int arm_number;
	
	int count=0;
	while (temp!=0)
	{
		remainder = temp%10;
		//reverse = reverse*10+remainder;
		temp = temp/10;
		count+=1;
	}
	
	while (temp2!=0)
	{
		
		remainder = temp2%10;
		for(int j = 0; j<count;j++)
		{
			arm_number=1;
			arm_number = arm_number*remainder;
		}
		final_sum += arm_number;
		temp = temp/10;
	}
	
	if (num == arm_number)
	{
		printf("Yes");
	}
	else
	{
	    	printf("No");
	}
}




