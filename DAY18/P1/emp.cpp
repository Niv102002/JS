#include <iostream>
#ifndef EMP_H
#define EMP_H
	#include"emp.h"
#endif

using namespace std;

Employee::Employee() 
{
    emp_id = 0;
    emp_name = '\0';
    salary = 0.0f;
}
    
Employee::Employee(int id, string name, float sal,int dd,int mm, int yy):b_date(dd,mm,yy)
{
    emp_id = id;
    emp_name = name;
    salary = sal;
}

float Employee::getsalary()
{
	return this->salary;
}

void Employee::display() 
{
    cout << "Employee ID: " << emp_id << endl;
    cout << "Employee Name: " << emp_name << endl;
    cout << "Employee Salary: $" << salary << endl;
    b_date.displaydate();
}

