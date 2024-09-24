#include<iostream>

using namespace std;


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
