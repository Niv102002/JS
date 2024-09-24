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
		#define PI 3.14
	#endif
	return 0;
}
