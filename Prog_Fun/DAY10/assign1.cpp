#include <iostream>
using namespace std;


void area(int&,float);
void area(float&);
void area(float&,float&);
void area(float&,float&,float&,float&,float&);
const float pi = 3.14;

int main() {
    int case_value;
    
    cout<<"Enter the number to calculate area/circumference and perimeter for required shape\n 1:Circle  2:Square  3:Rectangle  4:Triangle\n -->"<<endl;
    cin>>case_value;
    
    switch(case_value)
    {
        case 1:
            int r;
            cout<<"Enter the radius of circle : ";
            cin>>r;
            area(r,pi);
            break;
            
        case 2:
           float s;
            cout<<"Enter the side of square  : ";
            cin>>s;
            area(s);
            
            break;
            
        case 3:
            float l,br;
            cout<<"Enter the length and breadth of rectangle   : ";
            cin>>l>>br;
            area(l,br);
            break;
        
        case 4:
            float height,breadth_t,a,b,c;
            cout<<"Enter the height and breadth of triangle : ";
            cin>>height>>breadth_t;
            cout<<"Enter the 3 leghts of triangle : ";
            cin>>a>>b>>c;
            area(height,breadth_t,a,b,c);
            break;
            
        default:
            cout<<"Enter valid entry";
        
        
    }

    return 0;
}

void area(int &radius,float pi)
{	
    float area_c,perimeter_c;
    
    area_c = pi*radius*radius;
    perimeter_c = 2*pi*radius;
    
    cout<<"The area of circle is "<<area_c<<" and Perimeter is "<<perimeter_c;
    
}


void area(float &side)
{	
            float area_s,perimeter_s;
  
            area_s = side*side;
            perimeter_s = 4*side;
            
            cout<<"The area of square is "<<area_s<<" and Perimeter is "<<perimeter_s;
}

void area(float &lenght, float &breadth)
{	
            float area_r,perimeter_r;
            
            area_r = lenght*breadth;
            perimeter_r = 2*(lenght+breadth);
            
            cout<<"The area of rectangle is "<<area_r<<" and Perimeter is "<<perimeter_r;
            
}


void area(float &height,float &breadth_t, float &a, float &b, float &c)
{	
            float area_t,perimeter_t;
            
            area_t = (0.5)*height*breadth_t;
            perimeter_t = a+b+c;
            
            cout<<"The area of Triangle is  "<<area_t<<" and Perimeter is "<<perimeter_t;
}



