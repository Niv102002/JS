#include<stdio.h>

void display1();
void display2();
void display3();

int main()
{
	display1();
	printf("\nBack in main");
	return 0;
}

void display1()
{ 
	printf("\nHello");
	display2();
	printf("\nBack to display1");
}

void display2()
{ 
	printf("\nWelcome");
	display3();
	printf("\nBack to display2");
}

void display3()
{ 
	printf("\nBye");
	printf("\nBack to display3");
}
