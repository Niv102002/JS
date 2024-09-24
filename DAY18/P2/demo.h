#include<iostream>
using namespace std;

template<class T>
class Demo
{
	public:
		Demo();
		Demo(T);
		void show();
	private:
		T value;
};
