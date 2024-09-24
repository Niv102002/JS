#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j;
	char **arr,str[20];
	
	printf("Enter number of strings : ");
	scanf("%d",&i);
	
	printf("\n");
	
	
	arr=(char**)malloc(i*sizeof(char*));
	
	
	for(j=0;j<i;j++)
	{
		arr[j]=(char*)malloc(i*sizeof(char));
	}
	
	printf("Enter string --> \n");
	for(j=0;j<i;j++)
	{
		printf("String %d - ",j);
		scanf("%s",str);
		arr[j] = (char*)malloc((strlen(str)+1)*sizeof(char));
		strcpy(arr[j],str);
	}
	
	printf("\n\n");
	
	for(j=0;j<i;j++)
	{
		printf("String %d - %s\n",j,arr[j]);
	}
	
	
	for (j=0;j<i;j++)
	{
		arr[i];
	}
	free(arr);
	
	return 0;
}
