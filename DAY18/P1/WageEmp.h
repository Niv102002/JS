#ifndef EMP_H
#define EMP_H
	#include"emp.h"
#endif

class WageEmployee : public Employee
{
	public:
		WageEmployee();
		WageEmployee(int,string,float,int,int,int,int,int);
		float computesalary();
		void display();
		
	private:
		int hours,rate;
};
