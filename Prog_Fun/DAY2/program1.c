#include<stdio.h>

void display();
void print();

int main()
{
	printf("\nIn Main");
	display();
	printf("\nBack in main");
	display();
	printf("\nBack to calling");
	
	return 0;
}

void display()
{ 
	printf("\nhello");
	print();
	printf("\nBack to display");
}

void print()
{ 
	printf("\tworld\n");
}

