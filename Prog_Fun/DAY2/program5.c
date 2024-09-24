#include<stdio.h>

int swap(int*,int*);

int main()
{
	int num1,num2;
	printf("Enter numbers : ");
	scanf("%d %d",&num1,&num2);
	
	printf("Before Swapping : \n num1 = %d   num2 = %d\n",num1,num2);
	
	printf("After Swapping : \n");
	swap(&num1,&num2);
	printf("num1 = %d  num2 = %d\n",num1,num2);
	return 0;
}

int swap(int *a, int *b)
{ 
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	return *a,*b;
}
