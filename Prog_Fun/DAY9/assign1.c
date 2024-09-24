#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fptr=NULL;
	char ch;
	
	fptr = fopen("data1.txt","w");
	if (fptr==NULL)
	{
		printf("File not available");
		exit(0);
	}
	
	for(int i=65;i<91;i++)
	{
		fputc(i,fptr);
	}
	fclose(fptr);
	
	fptr = fopen("data1.txt","r");
	if (fptr==NULL)
	{
		printf("\n\tFile not available");
		exit(0);
	}
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c\n",ch);
	}
	
	fclose(fptr);
	printf("\n\n");
	return 0;
}
