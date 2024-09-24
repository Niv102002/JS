#include <stdio.h>

void alpha(char []);
void display (char []);

int main()
{
	char alphabets[26];
	printf("Alphabets are : ");
	alpha(alphabets);
	display (alphabets);
	return 0;
}

void alpha(char alphabets[])
{
	for(int i=65,j=0;i<=90;i++,j++)
	{
		alphabets[j]=i;
	}
}

void display (char alphabets[])
{
	for (int i=0;i<=25;i++)
	{
		printf("%c ",alphabets[i]);
	}
	printf("\n");
}
