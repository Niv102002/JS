#include <stdio.h>

void alpha(char [][2]);
void display(char[][2]);

int main()
{
	char alphabets[26][2];
	printf("Alphabets are : \n");
	alpha(alphabets);
	display(alphabets);
	
	return 0;
}


void alpha(char alphabets[26][2])
{
	int m,n;
	for(int i=0,m=65;i<26;i++,m++)
	{	
		alphabets[i][0]=m;
	}
	for (int n=97,j=0;j<26;j++,n++)
	{
		
		alphabets[j][1]=n;
	}
}



	
void display(char alphabets[26][2])
{
	int i,j;
	
	for (i=0;i<26;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%c ",alphabets[i][j]);
		}
		printf("\n");
	}
}
