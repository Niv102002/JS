#include<stdio.h>

#define PI 3.14

#define AREA_C(radius) PI*radius*radius
#define PERIMETER_C(radius) 2*PI*radius

#define AREA_S(side) side*side
#define PERIMETER_S(side) 4*side

#define AREA_R(lenght,breadth) lenght*breadth
#define PERIMETER_R(lenght,breadth) 2*(lenght+breadth)

#define AREA_T(height,breadth_t) (0.5*height*breadth_t)
#define PERIMETER_T(side1,side2,side3) (side1+side2+side3)


int main() {
    int case_value;
    printf("Enter the number to calculate area/circumference and perimeter for required shape\n 1:Circle  2:Square  3:Rectangle  4:Triangle\n -->");
    scanf("%d",&case_value);
    
    switch(case_value)
    {
        case 1:
            float radius;
            printf("Enter the radius of circle : ");
            scanf("%f", &radius);
            printf("The area of circle is %f and Perimeter is %f\n",AREA_C(radius),PERIMETER_C(radius));
            break;
            
        case 2:
            float side;
            printf("Enter the side of square : ");
            scanf("%f",&side);
            printf("The area of Square is %f and Perimeter is %f\n",AREA_S(side),PERIMETER_S(side));
            break;
            
        case 3:
            float lenght,breadth;
            printf("Enter the length and breadth of rectangle : ");
            scanf("%f %f", &lenght,&breadth);
            printf("The area of Rectangle is %f and Perimeter is %f\n",AREA_R(lenght,breadth),PERIMETER_R(lenght,breadth));
            break;
        
        case 4:
            float height,breadth_t,side1,side2,side3;
            printf("Enter the height and breadth of triangle : ");
            scanf("%f %f", &lenght,&breadth_t);
            printf("Enter the 3 sides of triangle");
            scanf("%f %f %f", &side1,&side2,&side3);
            printf("The area of Triangle is %f and Perimeter of Triangle is %f\n",AREA_T(height,breadth_t),PERIMETER_T(side1,side2,side3));
            break;
            
        default:
            printf("Enter valid entry");
    }
    return 0;
}

