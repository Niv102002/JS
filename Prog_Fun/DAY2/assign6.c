#include<stdio.h>

int palindrome(int);

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Is palindrome number or not = ");
	printf("%c\n",(palindrome(num)));
	
	return 0;
}

int palindrome(int num)
{ 
	int temp = num;
	int reverse=0,remainder;
	while (temp!=0)
	{
		remainder = temp%10;
		reverse = reverse*10+remainder;
		temp = temp/10;
	}
	    
	if (num == reverse)
	{
		printf("Yes");
	}
	else
	{
	    	printf("No");
	}
}

