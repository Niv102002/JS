//#ifndef MANAGER_H
//#define MANAGER_H
	#include"manager.h"
//#endif
//#ifndef SALES_H
//#define SALES_H
	#include"sales.h"
//#endif

class salesmanager : public salesperson, public ManagerEmp
{
	public:
		salesmanager();
		salesmanager(int,string,float,int,int,int,int,int,int,int,int,int,int);
		float computesalary();
		void display();
		~salesmanager(){}
	private:
		int bonus;
};
