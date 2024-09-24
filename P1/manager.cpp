#include"manager.h"

ManagerEmp::ManagerEmp(int id,string nm,float sal,int dd,int mm ,int yy, int b, int da) : Employee(id,nm,sal,dd,mm,yy)
{
	bonus = b;
	Daily_allowance = da;
}

float ManagerEmp::computesalary()
{
	return Employee::getsalary() + (bonus*Daily_allowance);
}


void ManagerEmp::display()
{
	Employee::display();
	cout<<"Bonus : "<<bonus<<endl<<endl;
	cout<<"Daily_allowance : "<<Daily_allowance<<endl<<endl;
}

void ManagerEmp::Bonus()
{
	cout<<"Bonus is called"<<endl;
}
