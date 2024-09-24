#include<iostream>
using namespace std;

class complex
{
	public:
		complex();
		complex(int,int);
		
		void display();
		
		complex operator+(complex &);
		complex operator++();
		complex operator++(int);
		
	private:
		int real,imaginary;
};

	
