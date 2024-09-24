#include<iostream>
using namespace std;

class complex
{
	public:
		complex();
		complex(int,int);
		
		void display();
		
		complex operator+(complex &);
	private:
		int real,imaginary;
};

	
