#include<stdio.h>

int main()
{
	int num1,num2;
	char n;
	printf("Enter numbers: ");
	scanf("%d %d", &num1,&num2);
	
	n = getchar();
	switch ('n')
	{
		case 'a':
			printf("Addition : %d",(num1+num2));
			break;
		case 's':
			printf("Subtraction : %d",(num1-num2));
			break;
		case 'm':
			printf("Multiplication : %d",(num1*num2));
			break;
		case 'd':
			printf("Division : %d",(num1/num2));
			break;
		default:
			printf("Enter valid case input");
	}

	return 0;
}
