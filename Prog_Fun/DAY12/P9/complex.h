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
		
		friend complex operator+(int,complex &);
		
	private:
		int real,imaginary,n;
};

	
