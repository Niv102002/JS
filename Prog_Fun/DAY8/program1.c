#include<stdio.h>

union identity
{
	char pan[11];
	char adhaar[14];
	char voter_id[12];
	char license[11];
};

int main()
{
	union identity id;
	strcpy(id.pan,"ABCD184639B");
	printf("\n%s",id.pan);
}
