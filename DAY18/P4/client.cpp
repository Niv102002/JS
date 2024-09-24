#include"salesmng.h"
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<exception>

void file (Employee * eptr)
{
    ofstream out;
	out.open("emp_name.txt");
	
	if (!out.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	do
	{
		cout<<"\nEnter Name : ";
		cin>>str;
		out << str << ",";
		
		cout<<"\nDo you want to continue ? (1/0)";
		cin >> n;
	} while(n!=0);
	
	cout<<"\nWriting data to file is done...\n";
	out.close();
	
	ifstream in;
	in.open("emp_name.txt");
	
	if (!in.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	
	cout<<"\nNames : ";
	in >> str;
	stringstream name(str);
	string temp;
	
	while(getline(name,temp,','))
		cout<<"\n"<<temp;
	
	in.close();
	
	cout<<endl<<endl;
}

int main() 
{
    Employee *eptr=NULL;
    
    int i;
    cout<<"Enter the choice \n 1-Wage Employee\n 2-Sales person\n 3-Manager\n 4-Sales manaager"<<endl<<endl;
    cin>>i;
    
    cout<<endl;
    
    switch(i)
    {
    	case 1:
    		eptr = new WageEmployee (101,"Tom",20000,01,06,1996,20,15);
	        eptr -> display();
	        file(eptr);
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

