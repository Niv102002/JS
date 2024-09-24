#include<stdio.h>

int calculate(char[]);

int main()
{
	char str[100];
	int val;
	printf("Enter string : ");
	scanf("%s",str);
	printf("String 1 = %s  \n",str);
	printf("Number of spaces in string : %d",calculate(str));
	return 0;
} 


int calculate(char str[])
{
	int i,count=0,l;
	for(l=0;str[i]!='\0';l++);
	for(i=0;i<l;i++)
	{
		if (str[i]==' ')
			count+=1;
	}
	return count;
}

