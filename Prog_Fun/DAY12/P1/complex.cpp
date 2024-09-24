#include"complex.h"
complex::complex()
{
	real=imaginary=0;
}

complex:: complex(int rl,int img)
{
	this->real=rl;
	this->imaginary=img;
}
void complex::display()
{ 
	cout<<"Complex Number:"<<real<<"+"<<imaginary<<"i"<<endl;
}
