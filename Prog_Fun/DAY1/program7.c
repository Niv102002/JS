#include<stdio.h>

int main()
{
	int num1,num2,n;
	printf("Enter numbers: ");
	scanf("%d %d", &num1,&num2);
	
	printf("Enter case (add-1,sub-2,mul-3,div-4) input: ");
	scanf("%d", &n);
	
	switch (n)
	{
		case 1:
			printf("Addition : %d",num1+num2);
			break;
		case 2:
			printf("Subtraction : %d",num1-num2);
			break;
		case 3:
			printf("Multiplication : %d",num1*num2);
			break;
		case 4:
			printf("Division : %d",num1/num2);
			break;
		default:
			printf("Enter valid case input");
	}

	return 0;
}
