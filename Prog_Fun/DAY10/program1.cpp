#include<iostream>
using namespace std;

void swap(int &, int &);
int main()
{
	int num1=10,num2=20;
	cout<<"Before swappning : "<<num1<<" and "<<num2<<"\n";
	swap(num1,num2);
	cout<<"After swappning : "<<num1<<" and "<<num2<<"\n";
	return 0;
}

void swap(int &num1, int &num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
}

