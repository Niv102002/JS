#include<stdio.h>

int calculate(char[]);

int main()
{
	char str[100];
	printf("Enter string : ");
	scanf("%s",str);
	printf("String = %s  \n",str);
	calculate(str);
	return 0;
} 


int calculate(char str[])
{
	int i,j,countc[5],counts[5];
	char vowels_s[5] = {'a','e','i','o','u'};
	char vowels_c[5] = {'A','E','I','O','U'};
	
	for(i=0;str[i]!='\0';i++)
	{
    	    if (str[i]>=97 && str[i]<=122)
    	    {
    	    	    count[5] = 0;
	    	    for(j=0;j<5;j++)
    		    {
		    	    if (str[i]==vowels_s[j])
		    	    {
		    	    	count[i]+=1;
		    	        printf("%c = %d \n",vowels_s[j],(count[i]));
		    	    }
		    	    else
		    	    {
		    	        printf("%c = %d \n",vowels_s[j],count[i]);
		    	    }
	    	    }
	    }
    	    
    	    if (str[i]>=65 && str[i]<=90)
    	    {
	    	    count[5] = 0;
	    	    for(j=0;j<5;j++)
    		    {
		    	    if (str[i]==vowels_c[j])
		    	    {	
		    	    	count[i]+=1;
		    	        printf("%c = %d \n",vowels_c[j],(count[i]));
		    	    }
		    	    else
		    	    {
		    	        printf("%c = %d \n",vowels_c[j],count[i]);
		    	    }
	    	    }
	    }
    	}
    
}
