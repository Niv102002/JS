#include<stdio.h>

void modify_value(int *);

int main()
{
	int value=10;
	modify_value(&value);
	printf("modified value = %d",value);
	
	return 0;
}

void modify_value(int *value)
{ 
	*value = 100;
}

