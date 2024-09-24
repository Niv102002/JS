//#include"sales.h"
//#include"manager.h"
#include"salesmng.h"
#include<typeinfo>

int main() 
{
    Employee *eptr=NULL;
    
    
    int i;
    cout<<"Enter the choice \n 1-Wage Employee\n 2-Sales person\n 3-Manager\n 4-dynamic cast manager's bonus\n 5-Sales manaager"<<endl<<endl;
    cin>>i;
    
    cout<<endl;
    
    switch(i)
    {
    	case 1:
    		eptr = new WageEmployee (101,"Tom",20000,01,06,1996,20,15);
	        eptr -> display();
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl<<endl;
	        break;
    		
    	case 2:
    		eptr = new salesperson (103,"Noah",120000,10,03,1999,8,45,50,2000);
    		eptr -> display();
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl<<endl;
    		break;
    		
    	case 3:
    		eptr = new ManagerEmp (102,"Cillian",50000,27,03,1990,5000,1800);
    		eptr -> display();
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl<<endl;
    		break;
    		
    	case 4:
    		dynamic_cast<ManagerEmp*>(eptr)->Bonus();
    		break;
    		    		
    	case 5:
    		eptr = new salesmanager (104,"klaus",300000,10,10,2000,8,45,50,2000,1800,5000,3000);
    		eptr -> display();
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl<<endl;
    		break;
    		
    	default:
    		cout<<"Enter valid case";
    		break;
    		
    }
    
    if(eptr)
    {
        delete eptr;
        eptr = NULL;
    }
    
    return 0;
}


/*#include"WageEmp.h"
#include"manager.h"
#include"sales.h"
#include"salesmng.h"

int main() 
{
    WageEmployee Tom(101,"Tom",20000,01,06,1996,20,15);
    Tom.display();
    
    ManagerEmp Cillian(102,"Cillian",50000,27,03,1990,1800);
    Cillian.display();
   
    salesperson noah(103,"Noah",120000,10,03,1999,8,45,50,2000);
    noah.display();
   
    salesmanager klaus(104,"klaus",300000,10,10,2000,8,45,50,2000,1800,5000);
    noah.display(); 
    
    Employee *eptr=NULL;
    
    //eptr = new Employee();
   // eptr -> display();
    cout<<endl<<endl;
    
    eptr = new WageEmployee (101,"Tom",20000,01,06,1996,20,15);
    eptr -> display();
    
    cout<<"\nTotal salary : "<<eptr->computesalary()<<endl;
    
    return 0;
}*/

