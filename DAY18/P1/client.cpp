#include"sales.h"
#include"manager.h"


int main() 
{
    Employee *eptr=NULL;
    
    int i;
    cout<<"Enter the choice 1-Wage employee 2-sales person 3-manager 4-dynamic cast manager's bonus : "<<endl;
    cin>>i;
    
    switch(i)
    {
    	case 1:
    		eptr = new WageEmployee (101,"Tom",20000,01,06,1996,20,15);
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl;
	        eptr -> display();
	        break;
    		
    	case 2:
    		eptr = new salesperson (103,"Noah",120000,10,03,1999,8,45,50,2000);
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl;
    		eptr -> display();
    		break;
    		
    	case 3:
    		eptr = new ManagerEmp (102,"Cillian",50000,27,03,1990,5000,1800);
    		cout<<"\nTotal salary : "<<eptr->computesalary()<<endl;
    		eptr -> display();
    		break;
    		
    	case 4:
    		dynamic_cast<ManagerEmp*>(eptr)->Bonus();
    		/*Employee *eptr= new ManagerEmp();
    		ManagerEmp *mgr = dynamic_cast<ManagerEmp*>(eptr);
    		mgr -> Bonus();*/
    		break;
    		
    	/*case 4:
    		eptr = new salesmanager (104,"klaus",300000,10,10,2000,8,45,50,2000,1800,5000);
    		eptr -> display();
    		break;*/
    		
    	default:
    		cout<<"Enter valid case";
    		break;
    		
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

