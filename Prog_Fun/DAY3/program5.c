#include<stdio.h>

#define MUL(n1,n2) n1*n2

int main()
{
	int ans,ans2;
	ans = MUL(6,2);
	ans2 = MUL(2+2,3+3);
	printf("answer = %d\n",ans);
	printf("answer 2 = %d\n",ans2);
	return 0;
}
