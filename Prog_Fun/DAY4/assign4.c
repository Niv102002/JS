
#include <stdio.h>

int getvalue(int []);
int max(int []);
int display (int);

int main()
{
	int values[10],max_num;
	getvalue(values);
	max_num = max(values);
	printf("Maximum of given number is : ");
	display (max_num);
	return 0;
}

int getvalue(int values[])
{
	printf("Enter values : ");
	for (int i=0;i<10;i++)
	{
		scanf("%d",&values[i]);
	}
}

int max(int values[])
{
	int i;
	int max=0;
	for(i=0;i<10;i++)
	{
	    if (max>values[i])
	    {
	        continue;
	        //i++;
	    }
	    else
	    {
	        max = values[i];
	        continue;
	    }
	}
	return max;
}

int display(int max )
{
		printf("%d \n",max);
}
