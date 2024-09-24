#include"salesmng.h"

salesmanager::salesmanager(int id,string nm,float sal,int dd,int mm ,int yy, int h, int r, int s, int c, int da, int b, int bo) : salesperson(id,nm,sal,dd,mm,yy,h,r,s,c), ManagerEmp(id,nm,sal,dd,mm,yy,da,b), Employee(id, nm, sal, dd, mm, yy)
{
	bonus = bo;
}

float salesmanager::computesalary()
{
	return salesperson::getsalary() + bonus;
}

void salesmanager::display()
{
	salesperson::display();
	ManagerEmp::display();
	cout<<"Sales : "<<bonus<<endl<<endl;
}
