#include"complex.h"
complex::complex()
{
	real=imaginary=n=0;
}

complex:: complex(int rl,int img)
{
	this->real=rl;
	this->imaginary=img;
}

complex complex :: operator+(complex & c)
{
	complex temp;
	temp.real = this->real + c.real;
	temp.imaginary = this->imaginary+ c.imaginary;
	
	return temp;
}

complex complex :: operator++()
{
	this -> real++;
	++this-> imaginary;
	
	return (*this);
}

complex complex :: operator++(int)
{
	complex temp = *this;
	++this -> real;
	this-> imaginary++;
	
	return temp;
}

complex operator+(int n , complex &c )
{
	complex temp;
	
	temp.real = n + c.real;
	temp.imaginary = n + c.imaginary;
	
	return temp;

}

void complex::display()
{ 
	cout<<"Complex Number : "<<real<<"+"<<imaginary<<"i"<<endl;
}
