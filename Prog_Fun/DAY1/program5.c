#include<stdio.h>

int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	
	if (marks>=75)
		printf("Grade A");
	if (marks<75 && marks>=55)
		printf("Grade B");
	if (marks<55 && marks>=40)
		printf("Grade C");
	else
		printf("FAIL");

	return 0;
}
