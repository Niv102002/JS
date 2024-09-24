
#include <stdio.h>

int main() {
    int case_value;
    float pi = 3.14;
    printf("Enter the number to calculate area/circumference and perimeter for required shape\n 1:Circle  2:Square  3:Rectangle  4:Triangle\n -->");
    scanf("%d",&case_value);
    
    switch(case_value)
    {
        case 1:
            float radius;
            float area_c,perimeter_c;
            printf("Enter the radius of circle : ");
            scanf("%f", &radius);
            
            area_c = pi*radius*radius;
            perimeter_c = 2*pi*radius;
            
            printf("The area of circle is %f and Perimeter is %f",area_c,perimeter_c);
            
            break;
            
        case 2:
            float side;
            float area_s,perimeter_s;
            printf("Enter the side of square : ");
            scanf("%f",&side);
            
            area_s = side*side;
            perimeter_s = 4*side;
            
            printf("The area of Square is %f and Perimeter is %f",area_s,perimeter_s);
            
            break;
            
        case 3:
            float lenght,breadth;
            float area_r,perimeter_r;
            printf("Enter the length and breadth of rectangle : ");
            scanf("%f %f", &lenght,&breadth);
            
            area_r = lenght*breadth;
            perimeter_r = 2*(lenght+breadth);
            
            printf("The area of Rectangle is %f and Perimeter is %f",area_r,perimeter_r);
            
            break;
        
        case 4:
            float height,breadth_t,a,b,c;
            float area_t,perimeter_t;
            printf("Enter the height and breadth of triangle : ");
            scanf("%f %f", &lenght,&breadth_t);
            printf("Enter the 3 leghts of triangle");
            scanf("%f %f %f", &a,&b,&c);
            
            area_t = (0.5)*height*breadth_t;
            perimeter_t = a+b+c;
            
            printf("The area of Triangle is %f and Triangle is %f",area_t,perimeter_t);
            
            break;
            
        default:
            printf("Enter valid entry");
        
        
    }

    return 0;
}

