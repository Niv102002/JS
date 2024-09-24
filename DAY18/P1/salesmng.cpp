#include"salesmng.h"

salesmanager::salesmanager(int id,string nm,float sal,int dd,int mm ,int yy, int h, int r, int s, int c, int da, int b) : salesperson(id,nm,sal,dd,mm,yy,h,r,s,c), managerEmp(id,nm,sal,dd,mm,yy,da)
{
	bonus = b;
}

void salesmanager::display()
{
	salesperson::display();
	ManagerEmp::display();
	cout<<"Sales : "<<bonus<<endl<<endl;
}
