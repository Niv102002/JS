#include<stdio.h>

char length(char[],char[]);
char copy(char[],char[]);
char concat(char[],char[]);
char compare(char[],char[]);
char reverse(char[],char[]);

int main()
{
	char str1[50],str2[50];
	int val;
	printf("Enter strings : ");
	scanf("%s %s",str1,str2);
	
	printf("String 1 = %s  \n String 2 = %s \n",str1,str2);
	printf("Enter the operation to be performed : 1-Length  2-Copy  3-Concatenate  4-Compare  5-Reverse : \n");
	scanf("%d",&val);
	
	switch(val)
	{
		case 1:
			length(str1,str2);
			break;
			
		case 2:
			copy(str1,str2);
			break;
			
		case 3:
			concat(str1,str2);
			break;
			
		case 4:
			compare(str1,str2);
			break;
			
		case 5:
			reverse(str1,str2);
			break;
			
		default:
			printf("Enter valid case !!");
			break;
	}
	return 0;
}


char length(char str1[],char str2[])
{
	int i,j;
	for(i=0;str1[i]!='\0';i++);
	printf("Length of String 1 = %d \n", i);
	
	for(j=0;str2[j]!='\0';j++);
	printf("Length of String 2 = %d \n", j);
}

char copy(char str1[],char str2[])
{
	int i;
	for(i=0; str2[i]!='\0';i++)
	{
		str1[i]=str2[i];
	} 
	str1[i]='\0';
	printf("Value of string 1 after copying : %s \n", str1);
}

char concat(char str1[],char str2[])
{ 	
	int j=0,i;
	for(i=0; str1[i]!='\0';i++);
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	} 
	str1[i]='\0';
	printf("Value of string 1 after concatenation : %s \n", str1);
}

char compare(char str1[],char str2[])
{
	for (int i=0;str1[i]!='\0';i++)
	{
		if (str1[i]==str2[i])
			continue;
		else
			printf("strings are not equal \n");
			return 0;
	}
	printf("strings are equal \n");
}

char reverse(char str1[],char str2[])
{
	char temp1,temp2;
	int l;
	
	for(l=0; str1[l]!='\0';l++);
	for (int i=0;i<l;i++)
	{
		temp1=str1[l-1];
		str1[l-1]=str1[i];
		str1[i]=temp1;
		l--;
	}
	printf("Reversed string 1 : %s \n",str1);
	
	for(l=0; str2[l]!='\0';l++);
	for (int i=0;i<l;i++)
	{
		temp2=str2[l-1];
		str2[l-1]=str2[i];
		str2[i]=temp2;
		l--;
	}
	printf("Reversed string 2 : %s \n",str2);
}

