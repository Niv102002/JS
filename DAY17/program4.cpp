#include<iostream>

using namespace std;

bool check(int n)
{
	if (n==0)
		throw 0;
	else if (n>0)
		return true;
	else 
		return false;
}

int *Array(int size)
{
	bool status = check(size);
	int * arr = new int [size];
	return arr;
}

int main()
{
	int* arr=NULL, size = 0;
	
	try
	{
		cout<< "\nEnter size of array : ";
		cin>>size;
		arr = Array(size);
		cout<<"\nProgram executes successfully";
	}
	
	catch(int s)
	{
		cout<<"\nInappropriate size...";
	}
	delete[]arr;
	
	cout<<endl<<endl;
	
	return 0;
}
