#include"sales.h"

salesperson::salesperson(int id,string nm,float sal,int dd,int mm ,int yy, int h, int r, int s, int c) : WageEmployee(id,nm,sal,dd,mm,yy,h,r)
{
	sales = s;
	commission = c;
}

float salesperson::computesalary()
{
	return WageEmployee::getsalary() + (sales*commission);
}


void salesperson::display()
{
	Employee::display();
	cout<<"Sales : "<<sales<<endl;
	cout<<"Commission : "<<commission<<endl<<endl;
}
