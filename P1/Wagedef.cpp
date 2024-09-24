#include"WageEmp.h"

WageEmployee::WageEmployee(int id,string nm,float sal,int dd,int mm ,int yy, int h, int r) : Employee(id,nm,sal,dd,mm,yy)
{
	hours = h;
	rate = r;
}

float WageEmployee::computesalary()
{
	return Employee::getsalary() + (hours*rate);
}

void WageEmployee::display()
{
	Employee::display();
	cout<<"Hours : "<<hours<<endl;
	cout<<"Rate : "<<rate<<endl;
}
