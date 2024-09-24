#include"manager.h"
#include"sales.h"

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
