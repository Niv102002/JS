//#ifndef WAGEEMP_H
//#define WAGEEMP_H
	#include"WageEmp.h"
//#endif

class salesperson : public WageEmployee
{
	public:
		salesperson();
		salesperson(int,string,float,int,int,int,int,int,int,int);
		float computesalary();
		void display();
		~salesperson(){}
		
	private:
		int sales,commission;
};
