#include<stdio.h>

//#define PI 3.14

int main()
{
	double area, radius=2;
	#ifdef PI
		printf("PI = %f\n",PI);
		area = radius*radius*PI;
		printf("Area = %f\n",area);
	#else
		printf("maco is not defined\n");
	#endif
	return 0;
}
