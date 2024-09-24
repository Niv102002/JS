#include <stdio.h>
#define PI 3.14
float circle_parameters(float*, float*,float*);
void main() {
    float rad,area,circum;
    //int *r;
    printf("Enter the radius: ");
    scanf("%f",&rad);
    //r=&rad;
    circle_parameters(&rad,&area,&circum);
    printf("Area = %f Perimeter = %f ",area,circum);
    
    //return 0;
}

float circle_parameters(float*r, float*area,float*circum)
{
    float rad;
    //float *ar,*cr; 
    rad = *r;
    *area = (PI*rad*rad);
    *circum = (PI*2*rad);
    //*area = ar;
    //*cir = cr;
    //return 0;
}
