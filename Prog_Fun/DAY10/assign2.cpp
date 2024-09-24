#include <iostream>
using namespace std;


void sum(int&,int&);
void sum(float&,float&);
void sum(int&,float&);

int main() {
    int case_value;
    
    cout<<"Enter the number to calculate sum for required data type\n 1:Integer values  2:Float values  3:Integer & Float values\n -->"<<endl;
    cin>>case_value;
    
    switch(case_value)
    {
        case 1:
            int a,b;
            cout<<"Enter the integer values : ";
            cin>>a>>b;
            sum(a,b);
            break;
            
        case 2:
            float x,y;
            cout<<"Enter the float values : ";
            cin>>x>>y;
            sum(x,y);
            
            break;
            
        case 3:
            int c;
            float z;
            cout<<"Enter the integer value and float value respectively : ";
            cin>>c>>z;
            sum(c,z);
            break;
            
        default:
            cout<<"Enter valid entry"<<endl;
        
        
    }

    return 0;
}

void sum(int &num1,int &num2)
{	
    int s;
    
    s=num1+num2;
    
    cout<<"The addition of two integer values is "<<s<<endl;
    
}

void sum(float &num1,float &num2)
{	
    float s;
    
    s=num1+num2;
    
    cout<<"The addition of two float values is "<<s<<endl;
    
}


void sum(int &num1,float &num2)
{	
    float s;
    
    s=num1+num2;
    
    cout<<"The addition of integer and float value is "<<s<<endl;
    
}


