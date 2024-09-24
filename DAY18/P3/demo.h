#include<iostream>
using namespace std;

template<class T>
class stack
{
	public:
		stack();
		stack(T);
		void display();
		T *pop();
		void push(T&);
	private:
		T * pointer;
		int size;
		int top;
};
