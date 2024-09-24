#include<iostream>
using namespace std;

void swap(int &, int &);
void swap(char &, char &);
void swap(float &, float &);
int main()
{
	int num1=10,num2=20;
	char ch1='a',ch2='b';
	float f1=10.01,f2=20.02;
	
	cout<<"Before swappning : "<<num1<<" and "<<num2<<"\n";
	swap(num1,num2);
	cout<<"After swappning : "<<num1<<" and "<<num2<<"\n";
	cout<<"\n";
	
	cout<<"Before swappning : "<<ch1<<" and "<<ch2<<"\n";
	swap(ch1,ch2);
	cout<<"After swappning : "<<ch1<<" and "<<ch2<<"\n";
	cout<<"\n";
	
	cout<<"Before swappning : "<<f1<<" and "<<f2<<"\n";
	swap(f1,f2);
	cout<<"After swappning : "<<f1<<" and "<<f2<<"\n";
	cout<<"\n";
	
	return 0;
}

void swap(int &num1, int &num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
}


void swap(char &ch1, char &ch2)
{
	int temp;
	temp=ch1;
	ch1=ch2;
	ch2=temp;
}


void swap(float &f1, float &f2)
{
	float temp;
	temp=f1;
	f1=f2;
	f2=temp;
}

