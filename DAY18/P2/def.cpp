#include "demo.h"
template<class T> Demo<T>::Demo()
{
	value = 0;
}

template<class T> Demo<T>::Demo(T val)
{
	value = val;
}

template<class T>
void Demo<T>::show()
{
	cout<<"\nValue : "<<value;
}
