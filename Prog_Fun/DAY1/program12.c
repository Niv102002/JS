#include<stdio.h>

int main()
{
	int capital,small;
	capital = 65;
	small = 97;
	
	printf("Alphabets in parallel order ");

	for(int i=0,j=0;i<=25;i++,j++)
	{
		printf("%c %c \n", capital,small);
		capital++;
		small++;
	}

	return 0;

}
