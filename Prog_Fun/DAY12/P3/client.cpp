

#include"complex.h"
int main()
{
	complex c1;
	c1.display();
	
	complex c2(20,50);
	c2.display();
	
	complex c3(10,42);
	c3.display();
	
	complex c4;
	c4 = c2.operator-(c3);
	c4.display();
	
	return 0;
	
}
	
