#include <iostream>
#include <string>
#include"date.cpp"

using namespace std;

class Employee 
{
    public:
        Employee();
        Employee(int,string,float,int,int,int);
        float getsalary();
        virtual void display(); 
        virtual float computesalary()=0; 
        virtual ~Employee()
        {}
        
    private:
        int emp_id;
        string emp_name;
        float salary;
        Date b_date;
};


