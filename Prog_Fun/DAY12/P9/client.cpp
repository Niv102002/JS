#include"complex.h"
int main()
{
	complex c1;
	cout<<"c1 : ";
	c1.display();
	
	complex c2(2,3);
	cout<<"c2 : ";
	c2.display();
	
	complex c3(4,5);
	cout<<"c3 : ";
	c3.display();
	
	complex c4;
	cout<<"c4 : ";
	c4.display();
	
	cout<<endl<<endl;
	
	cout<<"-----------------Operator-----------------"<<endl;
	c1=c2+c3;
	cout<<"c1 : ";
	c1.display();
	cout<<endl;
	
	cout<<"-----------------Pre Increment------------------"<<endl;
	c1=++c2;
	cout<<"c1 : ";
	c1.display();
	cout<<"c2 : ";
	c2.display();
	cout<<endl;
	
	cout<<"-----------------Post Increment-----------------"<<endl;
	c1=c3++;
	cout<<"c1 : ";
	c1.display();
	cout<<"c3 : ";
	c3.display();
	cout<<endl;
	
	cout<<"-----------------Build-in + UDT-----------------"<<endl;
	c1=3+c4;
	cout<<"c1 : ";
	c1.display();
	
	return 0;
}
	
