#ifndef EMP_H
#define EMP_H
	#include"emp.h"
#endif

class ManagerEmp : public Employee
{
	public:
		ManagerEmp();
		ManagerEmp(int,string,float,int,int,int,int,int);
		float computesalary();
		void display();
		void Bonus();
		
	private:
		int Daily_allowance,bonus;
};
