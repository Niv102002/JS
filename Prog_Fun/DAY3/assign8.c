#include<stdio.h>

#define ALPHA(n) (((n>='a' && n<='z') || (n>='A' && n<='Z'))?(printf("Yes\n")):(printf("No\n")))

int main()
{
	char c;
	printf("Enter Character to check if it is an alphabet or not: ");
	scanf("%c",&c);
	ALPHA(c);
	return 0;
}
